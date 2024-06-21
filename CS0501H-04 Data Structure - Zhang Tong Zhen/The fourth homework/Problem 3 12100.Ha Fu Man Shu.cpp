#include <iostream>
#include <algorithm>

using namespace std;

struct HuffmanNode {
        int freq;
        int left, right;
};

class MinHeap {
private:
        HuffmanNode* heap;
        int capacity;
        int size;

        void siftUp(int idx) {
                while (idx > 0 && heap[(idx - 1) / 2].freq > heap[idx].freq) {
                        swap(heap[idx], heap[(idx - 1) / 2]);
                        idx = (idx - 1) / 2;
                }
        }

        void siftDown(int idx) {
                int minIdx;
                while (idx * 2 + 1 < size) {
                        minIdx = idx * 2 + 1;
                        if (minIdx + 1 < size && heap[minIdx + 1].freq < heap[minIdx].freq) {
                                minIdx++;
                        }
                        if (heap[idx].freq <= heap[minIdx].freq) break;
                        swap(heap[idx], heap[minIdx]);
                        idx = minIdx;
                }
        }

public:
        MinHeap(int cap) : capacity(cap), size(0) {
                heap = new HuffmanNode[capacity];
        }

        ~MinHeap() {
                delete[] heap;
        }

        void insert(HuffmanNode node) {
                if (size < capacity) {
                        heap[size] = node;
                        siftUp(size);
                        size++;
                }
        }

        HuffmanNode extractMin() {
                HuffmanNode minNode = heap[0];
                heap[0] = heap[size - 1];
                size--;
                siftDown(0);
                return minNode;
        }

        int getSize() const {
                return size;
        }

        bool isEmpty() {
                return size == 0;
        }
};

int computeHuffmanCost(int* freq, int n) {
        MinHeap heap(n);

        for (int i = 0; i < n; ++i) {
                if (freq[i] > 0) {
                        heap.insert({ freq[i], -1, -1 });
                }
        }

        int totalCost = 0;
        while (heap.getSize() > 1) {
                HuffmanNode left = heap.extractMin();
                HuffmanNode right = heap.extractMin();
                totalCost += left.freq + right.freq;
                heap.insert({ left.freq + right.freq, left.freq, right.freq });
        }

        return totalCost;
}

int main() {
        int N;
        cin >> N;
        if (N == 1) {
                cout << 1;
                return 0;
        }
        int* freq = new int[N];
        for (int i = 0; i < N; i++) {
                cin >> freq[i];
        }
        int pp = 0;
        for (int i = 0; i < N; i++) {
                if (freq[i] > 0) pp++;
        }
        if (pp == 1) {
                cout << 1;
                return 0;
        }
        int result = computeHuffmanCost(freq, N);
        cout << result << endl;

        delete[] freq;
        return 0;
}