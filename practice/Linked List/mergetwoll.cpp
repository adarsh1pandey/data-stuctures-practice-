#include <iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
} *first = NULL, *second = NULL, *third = NULL;
void Display(Node *p){
    
    while(p)
    {
        cout << p->data << endl;
        p = p->next;
    }

}

void create(int A[], int n)
{
    Node *p, *temp;
    p = new Node;
    p->data = A[0];
    p->next = NULL;
    first = p;

    for (int i = 1; i < n; i++)
    {
        temp = new Node;
        temp->data = A[i];
        temp->next = NULL;

        p->next = temp;
        p = temp;
    }
}


void create2(int A[], int n)
{
    Node *p, *temp;
    p = new Node;
    p->data = A[0];
    p->next = NULL;
    second = p;

    for (int i = 1; i < n; i++)
    {
        temp = new Node;
        temp->data = A[i];
        temp->next = NULL;

        p->next = temp;
        p = temp;
    }
}
void concat(Node *p, Node *q)
{
    third = p;
    while(p->next)
    {
        p = p->next;
    }
    p->next = second;
}

void merge(Node *p, Node *q)
{
    Node *last = NULL;
    if (p->data < q->data)
    {
        third = last = p;
        p = p->next;
        last->next = NULL;

    }
    else
    {
        third = last = q;
        q = q->next;
        last->next = NULL;

    }
    while(first != NULL && second != NULL)
    {
        if (first->data < second->data)
        {
            last->next = first;
            last = first;
            first = first->next;
            last->next = NULL;
        }
        else
        {
            last->next = second;
            last = second;
            second = second->next;
            last->next = NULL;

        }
        if (first != NULL)
            last->next = first;
        else 
            last->next = second;
    }
}
int main()
{
    int A[] = {1, 3, 5, 6, 8, 9};
    int n = sizeof(A) / sizeof(A[0]);
    int B[] = {2, 4, 7};
    int m = sizeof(B) / sizeof(B[0]);
    create(A, n);
    Display(first);
    create2(B, m);
    cout << endl;
    Display(second);
    cout << endl;
    concat(first, second);
    Display(third);

    cout << endl << endl;
    merge(first, second);

    Display(third);
}    