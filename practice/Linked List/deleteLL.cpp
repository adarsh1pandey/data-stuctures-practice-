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
    Node *temp;
    Node *p;
    p = new Node;
    p->data = A[0];
    p->next = NULL;
    first = p;

    for(int i = 1; i < n; i++)
    {
        temp = new Node;
        temp->data = A[i];
        temp->next = NULL;

        p->next = temp;
        p = temp;
    }
}
int Delete(int pos)
{
    int x;
    Node *p, *q;
    if (pos == 1)
    {
        p = first;
        x = p->data;
        first = first->next;
        delete(p);
    }
    else
    {
        p = first;
        q = NULL;

        for (int i = 0; i < (pos - 1) && p; i++)
        {
            q = p;
            p = p->next;

        }
        if (p)
        {
            q->next = p->next;
            x = p->data;
            delete(p);
        }
    }
    return x;
}

void Display()
{
    Node *p = first;
    while (p)
    {
        cout << p->data << endl;
        p = p->next;
    }
}

int main()
{
    int A[] = {1, 4, 5, 6, 7, 8};
    int n = sizeof(A)/sizeof(A[0]);
    
    create(A, n);
    cout << Delete(6) << endl<< endl;
    Display();
}