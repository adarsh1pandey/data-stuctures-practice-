#include <iostream>
using namespace std;


class Node 
{
    public:
        int data;
        Node *next;
} *first = NULL;


void create(int A[], int n)
{
    Node *p, *t;
    p = new Node;
    p->data = A[0];
    p->next = NULL;
    first = p;

    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = NULL;

        p->next = t;
        p = t;
    }
}

void Display()
{
    Node *p = first;
    while(p)
    {
        cout << p->data << endl;
        p = p->next;
    }
}
int IsSorted()
{
    Node *p = first;
    int x = -1;
    while(p)
    {
        if (x > p->data)
        {
            return false;
        }
        x = p->data;
        p = p->next;

    }
    return true;
}
void RDuplicates()
{
    Node *p = first;
    Node *q = first->next;
    while(q)
    {
        if (p->data != q->data)
        {
            p = q;
            q = q->next;
        }
        else
        {
            p->next = q->next;
            delete(q);
            q = p->next;

        }
    }
}
int main()
{
    int A[] = {12, 43, 43, 4325, 98989};
    create(A, 5);
    Display();
    cout << IsSorted() << endl;
    RDuplicates();
    Display();
}