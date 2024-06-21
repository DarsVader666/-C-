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
                root = nullptr;
        }
        void initializeTree(const int &height){
                int e, el, er;
                Node* p, *pl, *pr;
                seqQueue que(pow(2,height)-1);
                cin >> e;
                p = new Node(e);
                root = p;
                que.enQueue(p);
                for (int i = 1; i <= height; i++) {
                        for (int j = 1; j <= pow(2, i - 1); j++) {
                                p = que.front();
                                que.deQueue();
                                cin >> el >> er;
                                pl = new Node(el);
                                pr = new Node(er);
                                p->left = pl;
                                p->right = pr;
                                que.enQueue(pl);
                                que.enQueue(pr);
                       }
              

                }
        }
        void InOrder(Node* t) {
                if (!t->left) return;
                InOrder(t->left);
                if (t->data != -1) cout << t->data << " ";
                InOrder(t->right);
        }
        Node* getRoot() {
                return root;
        }
};
int main()
{
        BTree tree;
        int level;
        cin >> level;
        Node* p=new Node;
        tree.initializeTree(level);
       tree.InOrder(tree.getRoot());
}
