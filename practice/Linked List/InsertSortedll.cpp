#include<iostream>
using namespace std;

class Node {
    public: 
    int data;
    Node *next;
} *first = NULL;

void Sorted(int x)
{
    Node *p = first;
    Node *q = NULL;
    Node *t = new Node;
    t->data = x;
    while(p && p->data < x)
    {
        
        q = p;
        p = p->next;
    
    }
    t->next = p;
    q->next = t;
    
}

void createLL(int A[], int n)
{
    Node *p = new Node;
    p->data = A[0];
    p->next = NULL;
    first = p;

    for ( int i = 1; i < n; i++)
    {
        Node *last = new Node;
        last->data = A[i];
        last->next = NULL;
        p->next = last;
        p = last;
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

int main()
{
    int A[] = {1, 3 , 5, 6, 8, 9, 16};
    int n = sizeof(A)/sizeof(A[0]);
    createLL(A, n);
   
    Sorted(2);
    Display();
}