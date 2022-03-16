#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
} *first = NULL;

void create(int A[], int n)
{
    Node *temp;
    Node *p = first;
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

void Display()
{
    Node *p = first;
    while(p)
    {
        cout << p->data << "  ";
        p = p->next;
    }
}
void ReverseN(int n)
{
    Node *p = first;
    int i = 0;
    int A[n];
    while(p)
    {
        A[i] = p->data;
        p = p->next;
        i++;
    }
    p = first;
    i--;
    while(p)
    {
        p->data = A[i--];
        p = p->next;
    }

}
void ReverseNode(){
    Node *p = first;
    Node *q = NULL;
    Node *r = NULL;
    while(p)
    {
        r = q;
        q = p;
       
        p = p->next;
        q->next = r;
    }
    first = q;
}
void RecReverse(Node *q, Node *p)
{
    if(p)
    {
        RecReverse(p, p->next);
        p->next = q;
    }
    else{
        first = q;
    }
}

int main()
{
    int A[] = {1, 3, 5, 6, 8, 9, 65, 78, 877};
    int n = sizeof(A)/sizeof(A[0]);

    create(A, n);
   //ReverseNode();
    RecReverse(NULL ,first);
    Display();
}