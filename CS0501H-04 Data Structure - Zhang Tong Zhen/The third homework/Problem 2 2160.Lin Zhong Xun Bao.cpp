#include <iostream>
#include<cmath>
using namespace std;

class Node {
        friend class seqQueue;
        friend class BTree;
private:
        int data;
        Node* left, * right,*next;
public:
        Node() { left = nullptr; right = nullptr; };
        Node(const int& e, Node* L = nullptr, Node* R = nullptr) { data = e; left = L; right = R; };
};
class seqQueue {
        friend class BTree;
private:
        Node** array;
        int maxSize;
        int  Front, Rear;
public:
        seqQueue(const int &e){
                maxSize = e;
                Front = Rear = 0;
                array = new Node*[e];
        }
        bool isEmpty() {
                return Front == Rear ;
        }
        void enQueue(Node* p) {
                array[Rear] = p;
                Rear = (++Rear) % maxSize;
        }
        Node* deQueue() {
                Node *temp= array[Front];
                Front = (++Front) % maxSize;
                return temp;
        }
        Node *front() {
                return array[Front];
        }
        Node* rear() {
                return array[Rear];
        }
};
class BTree {
private:
        Node *root;
public:
        BTree() {
                root = new Node;
        }
        void initializeTree(Node* &t){
                int e;
                cin >> e;
                if (e == -1) t = nullptr;
                else {
                        t = new Node;
                        t->data = e;
                        initializeTree(t->left);
                        initializeTree(t->right);
                }
        }
        void InOrder(Node* t) {
                if (!t->left) return;
                InOrder(t->left);
                if (t->data != -1) cout << t->data << " ";
                InOrder(t->right);
        }
        Node* &getRoot() {
                return root;
        }
        int Height() {
                return Height(root);
        }
      
        int Height(Node* t) {
                int hl, hr;
                if (!t) return 0;
                hl = Height(t->left);
                hr = Height(t->right);
                if (hl >= hr) return 1 + hl;
                return 1 + hr;
        }
};
int main()
{
        BTree tree;
        int endFlag;
        tree.initializeTree(tree.getRoot());
        cout << tree.Height(tree.getRoot());
}
