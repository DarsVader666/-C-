#include<iostream>
using namespace std;

struct Node {
    int order, coeff;
    Node* nxt;
};

// 实现了两个多项式相加，但不包含系数为0的项。
Node* add_poly_no_zero(Node* a, Node* b) {
    // 如果其中一个多项式为空，则返回另一个多项式
    if (a == nullptr) return b;
    if (b == nullptr) return a;

    // 如果两个节点的指数相同
    if (a->order == b->order) {
        int newCoef = a->coeff + b->coeff;
        // 如果系数和为0，则继续下一组节点的相加
        if (newCoef == 0) {
            return add_poly_no_zero(a->nxt, b->nxt);
        }

        // 创建一个新的节点，表示这两个节点相加后的结果
        return new Node{
            .order = a->order,
            .coeff = a->coeff + b->coeff,
            .nxt = add_poly_no_zero(a->nxt, b->nxt)
        };
    }

    // 分别指向指数较大和较小的节点
    Node* hi = a, * lo = b;
    if (a->order < b->order) {
        hi = b;
        lo = a;
    }

    // 如果指数较大节点的系数为0，则继续递归处理下一节点
    if (hi->coeff == 0) {
        return add_poly_no_zero(hi->nxt, lo);
    }

    // 创建一个新的节点，表示指数较大节点与较小节点的相加结果
    return new Node{
        .order = hi->order,
        .coeff = hi->coeff,
        .nxt = add_poly_no_zero(hi->nxt, lo)
    };
}

// 调用 add_poly_no_zero 来执行多项式相加，并在最后检查结果是否为空。
// 如果为空，则返回一个新的节点（代表0多项式）；否则，返回相加后的多项式。
Node* add_poly(Node* a, Node* b) {
    Node* node = add_poly_no_zero(a, b);
    if (node == nullptr) {
        return new Node{
            .order = 0,
            .coeff = 0,
            .nxt = nullptr,
        };
    }
    else {
        return node;
    }
}

// 释放链表节点的内存，遍历链表并删除每个节点。
void drop_node(Node* node) {
    Node* p = node;
    while (p) {
        Node* n = p;
        p = p->nxt;
        delete n;
    }
}

int main() {
    Node* a = nullptr, * pa = nullptr, * b = nullptr, * pb = nullptr;
    int coef, orde;
    // 输入两个多项式
    cin >> coef >> orde;
    // pa: 储存上一轮循环的节点 na: 储存本轮循环的节点
    while (orde >= 0) {
        Node* na = new Node;
        na->order = orde;
        na->coeff = coef;
        na->nxt = nullptr;
        if (pa) pa->nxt = na;
        pa = na;
        if (a == nullptr) a = pa;
        cin >> coef >> orde;
    }

    cin >> coef >> orde;
    while (orde >= 0) {
        Node* nb = new Node;
        nb->order = orde;
        nb->coeff = coef;
        nb->nxt = nullptr;
        if (pb)  pb->nxt = nb;
        pb = nb;
        if (b == nullptr) b = pb;
        cin >> coef >> orde;
    }

    Node* c = add_poly(a, b);

    while (c) {
        cout << c->coeff << ' ' << c->order << endl;
        c = c->nxt;
    }

    drop_node(a);
    drop_node(b);
    drop_node(c);
    return 0;
}
