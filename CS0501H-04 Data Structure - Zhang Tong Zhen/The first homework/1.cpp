#include<iostream>
using namespace std;
class node {
    friend class LinkedList;
    private :
        int data;
        node* next;
};
class LinkedList {
    // Todo: some variables here
    node* head;
public:
    void initialize() {
        int n;
        cin>>n;
        int* a = new int[n];
        for (int i = 0; i < n; i++) cin>>a[i];
        // Todo
        head = new node();
        node* p = new node;
        head->next=p;
        node* q ;
        q = p;
        for (int i = 0; i < n-1; i++) {
            p->data = a[i];
            q = new node;
            p->next=q;
            p = q;
        }
        p->data = a[n - 1];
        p->next = nullptr;
        delete[] a;
    }

    void insert(int i, int x) {
        // Todo
        node* p = head->next;
        node* q;
        for (int j = 1; j < i; j++) {
            p = p->next;
        }
        q = new node();
        q->data = x;
        q->next = p->next;
        p->next = q;
    }

    void eraseFromHead(int i) {
        node* p = head;
        node* q;
        for (int j = 1; j < i; j++) {
            p = p->next;
        }
        q = new node();
        q = p->next;
        p->next = q->next;
        delete q;
        // Todo
    }

    void eraseFromEnd(int i) {
        // Todo
        int sum = 0;
        node* p = head;
        while (p) {
            sum++;
            p = p->next;
        }
        p = head;
        node* q;
        for (int j = 1; j < sum - i; j++) {
            p = p->next;
        }
        q = new node();
        q = p->next;
        p->next = q->next;
        delete q;
    }

    void printAll() {
        // Todo
        node* q = head->next;
        while (q) {
            cout << q->data << " ";
            q = q->next;
        }
        delete q;
        return;
    }

    void ClearMemory() {
        // Todo
        delete head;
    }
};

int main() {
    LinkedList List;
    int m, op, i, x;
    List.initialize();
    cin >> m;
    while (m--) {
        cin>>op;
        if (op == 1) {
            cin>>i>>x;
            List.insert(i, x);
        }
        else if (op == 2) {
            cin>>i;
            List.eraseFromHead(i);
        }
        else if (op == 3) {
            cin>>i;
            List.eraseFromEnd(i);
        }
    }
    List.printAll();
    List.ClearMemory();
    return 0;
}