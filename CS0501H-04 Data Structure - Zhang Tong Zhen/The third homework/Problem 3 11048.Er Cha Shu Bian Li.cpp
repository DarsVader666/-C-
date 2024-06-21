#include <iostream>
#include<cmath>
using namespace std;

class Node {
        friend class seqQueue;
        friend class BTree;
private:
        int data;
        Node* left, * right;
public:
        Node() { left = nullptr; right = nullptr; };
        //Node(const int& e, Node* L = nullptr, Node* R = nullptr) { data = e; left = L; right = R; };
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
};
class BTree {
private:
        Node *root;
public:
        BTree() {
                root = new Node;
        }
        void createTree() {
                int leafnum;
                cin >> leafnum;
                int height1 = log2(leafnum + 1);
                int height = pow(2, height1 - 1) - 1;
                Node*** p = new  Node ** [height];
                for (int i = 0; i < height; i++) {
                        p[i] = new Node * [3];
                }
                for (int i = 0; i < height; i++) {
                        for (int ii = 0; ii < 3; ii++) {
                                Node* q = new Node;
                                cin >> q->data;
                                p[i][ii]=q;
                        }
                        p[i][0]->left = p[i][1];
                        p[i][0]->right = p[i][2];
                }
                bool flag = true;
                int l;
                for (int i = 0; i < height; i++) {
                        for (int j = 0; j<height; j++) {
                                if (j == i) continue;
                                for (int k = 1; k < 3; k++) {
                                        if (p[i][0]->data == p[j][k]->data) {
                                                flag = false;
                                                break;
                                        }
                                }
                                if (!flag) {
                                        continue;
                                }
                        }
                        if (flag) {
                                l = i;
                                break;
                        }
                        flag = true;
                }
                root = p[l][0];
                cout << root->data<<endl;
                seqQueue q(height+1);
                q.enQueue(p[l][0]);
                for (int j = 0; j < height; j++) {
                        if (q.isEmpty()) break;
                        for (int i = 0; i < height; i++) {
                                if (q.front()->left->data == p[i][0]->data) {
                                        q.enQueue(p[i][0]);
                                        cout << p[i][0]->data<<endl;
                                        break; 
                                }
                        }
                        for (int i = 0; i < height; i++) {
                                if (q.front()->right->data == p[i][0]->data) {
                                        cout << p[i][0]->data<<endl;
                                        q.enQueue(p[i][0]);
                                        q.deQueue();
                                        break;
                                }
                        }
                }
                while (!q.isEmpty()) {
                        cout << q.front()->left->data<<endl;
                        cout << q.front()->right->data << endl;
                        q.deQueue();
                }
        }
};
int main(){
        BTree tree;
        tree.createTree();
}
