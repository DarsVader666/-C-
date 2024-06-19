#include<iostream>
#include<vector>
#define INT_MAX 2147483647
using namespace std;
template <class elemType>
class binarySearchTree;
template<class elemType>
class Node
{
    friend class binarySearchTree<elemType>;
private:
    elemType data;
    Node* left, * right;
    int factor; //平衡因子
public:
    Node() { left = NULL; right = NULL; }
    Node(const elemType& x, Node* l = NULL, Node* r = NULL)
    {
        data = x; left = l; right = r;
    }
};
template <class elemType>
class binarySearchTree
{
private:
    Node<elemType>* root;
    bool search(const elemType& x, Node<elemType>* t) const;
    void insert(const elemType& x, Node<elemType>*& t);
    void remove(const elemType& x, Node<elemType>*& t);
public:

    binarySearchTree() { root = NULL; }
    int search(const elemType& x) const;
    void insert(const elemType& x);
    void remove(const elemType& x);
    void levelTravese() const;//层次遍历,用于验证插入、删除操作
    void traversal(Node<elemType>* root);
    int getMin(Node<elemType>* root);
    int minabs(Node<elemType>* p, int& min);
    Node<elemType>* getRoot();
    ~binarySearchTree();
};
vector<int> vec;
template<class elemType >
void binarySearchTree<elemType>:: traversal(Node<elemType>* root) {
    if (root == nullptr) return;
    traversal(root->left);
    vec.push_back(root->data);
    traversal(root->right);
}
template<class elemType>
int binarySearchTree<elemType>:: getMin(Node<elemType>* root){
    vec.clear();
    traversal(root);
    if (vec.size() < 2)return 0;
    int result = INT_MAX;
    for (int i = 1; i < vec.size(); i++) {
        result = min(result, vec[i] - vec[i - 1]);
    }
    return result;
}
template <class elemType>
bool binarySearchTree<elemType>::search(const elemType& x, Node<elemType>* t) const
{
    if (!t) return false;
    if (x == t->data) return true;
    if (x < t->data)
        return search(x, t->left);
    else
        return search(x, t->right);
}
template <class elemType>
void binarySearchTree<elemType>::insert(const elemType& x, Node<elemType>*& t)
{
    if (!t) { t = new Node<elemType>(x); return; }
    if (x == t->data) return;
    if (x < t->data)
        insert(x, t->left);
    else
        insert(x, t->right);
}
template <class elemType>
int binarySearchTree<elemType>::search(const elemType& x) const
{
    Node<elemType>* p;
    p = root;
    while (p)
    {
        if (x[0] == p->data[0]) return p->data[1];
        if (x[0] < p->data[0]) p = p->left;
        else p = p->right;
    }
    return -1;
}


template <class elemType> //非递归算法实现
void binarySearchTree<elemType>::insert(const elemType& x)
{
    Node<elemType>* p;
    if (!root)  //如果查找树的根为空，直接建立一个结点并作为根结点
    {
        root = new Node<elemType>(x);
        return;
    }

    p = root;
    while (p)
    {
        if (x == p->data) return; //已经在二叉树中
        if (x < p->data)
        {
            if (!p->left)  //左子为空，插入位置即此地
            {
                p->left = new Node<elemType>(x);  return;
            }
            p = p->left;
        }
        else
        {
            if (!p->right)  //右子为空，插入位置即此地
            {
                p->right = new Node<elemType>(x);  return;
            }
            p = p->right;
        }//if
    }//while
}
template <class elemType> //非递归算法实现
binarySearchTree<elemType>::~binarySearchTree() {

}
template<class elemType>
Node<elemType>* binarySearchTree<elemType>::getRoot() {
    return root;
}
template<class elemType>
int binarySearchTree<elemType>::minabs(Node<elemType>* p, int& min) {
    int temp;
    while (p->left) {
        temp = abs(p->data - p->left->data);
        if (temp < min) {
            min = temp;
        }
        return minabs(p->left, min);
    }
    while (p->right) {
        temp = abs(p->data - p->right->data);
        if (temp < min) {
            min = temp;
        }
        return minabs(p->right, min);
    }

}

int main() {
	binarySearchTree<int> bst;
	int a;
	while (cin >> a) {
		if(a!=-1)bst.insert(a);
	}
    cout << bst.getMin(bst.getRoot());
	system("pause");
	return 0;
}