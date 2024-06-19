#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
};


ListNode* reverseList(ListNode* head) {
    /********* Begin *************/
    ListNode* temp;  //待会用来存放cur->next这个节点
        ListNode* pre=NULL;
        ListNode* cur=head;
 
        while(cur)   //循环到cur为空为止
        {
            temp=cur->next;  //保存原来的下一个节点
            cur->next=pre;   //反转
            pre=cur;
            cur=temp;  //往下走一个，直到cur->next=NULL为止，此时就已经到尾部了
        }
 
        return pre;

    /********* End *************/
}



ListNode* createList() {
    int x;
    ListNode head; 
    ListNode* p = &head; head.next = NULL;
    while (cin >> x) {
        p->next = new ListNode; p->next->val = x; p->next->next = NULL;
        p = p->next; 
    }
    return head.next;
}

void disp(ListNode* p) {
    while (p)
    {
        printf("%d -> ", p->val); p = p->next;
    }
    printf("nullptr\n");
}

int main()
{
    ListNode* L1 = createList(); disp(L1);
    ListNode* L2 = reverseList(L1); disp(L2);

    return 0;
}
