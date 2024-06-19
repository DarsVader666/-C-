#include <iostream>
using namespace std;

struct List
{
    int num;
    List* next;
};

int main()
{
    List* head, * p, * q;
    int num;

    head = NULL;
    q = head;
    cin >> num;
    while (num != -1)
    {
        p = new List;
        p->num = num;
        p->next=q;
        q = p;
        cin >> num;
    }

    for (p = q; p != NULL; p = p->next)
    {
        cout << p->num << " ";
    };
    cout << endl;

    for (p = head; p != NULL; p = q)
    {
        q = p->next;
        delete p;
    }

    return 0;
}