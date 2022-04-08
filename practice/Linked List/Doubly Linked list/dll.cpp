#include <iostream>
using namespace std;

class Node
{
    public:
        Node* pre;
        int data;
        Node* next;
} ;
class DoublyLL
{
    private:
        Node *first;
    public:
        DoublyLL(){first = NULL;}
        DoublyLL(int A[], int n);
        void Display();
        int Length();
        void insert(int index, int value);
        int Delete(int index);
        void Reverse();
};
DoublyLL :: DoublyLL(int A[], int n)
{
    Node *last, *t;
    first = new Node;
    first->pre = NULL;
    first->data = A[0];
    first->next = NULL;
    last = first;
    for(int i = 0; i < n; i++)
    {
        t = new Node;
        t->pre = last;
        t->data = A[i];
        t->next = last->next;

        last->next = t;
        last = t;
    }
}
void DoublyLL ::Display()
{
    Node *p = first;
    while(p)
    {
        cout << p->data << "   ";
        p = p->next;
    }
}
 
int DoublyLL :: Length()
{
    int len = 0;
    Node *p = first;
    while(p)
    {
        len++;
        p = p->next;
    }
    return len;
}
void DoublyLL :: insert(int index, int value)
{
    Node *t;
    if (index == 0)
    {
        t = new Node;
        t->data = value;
        t->pre = NULL;
        t->next = first;
        first = t;
    }
    else {
        Node *p = first;

        for(int i = 0; i < index-1; i++)
        {
            p = p->next;

        }
        t = new Node;
        t->pre = p;
        t->data = value;
        t->next = p->next;
        p->next = t;
        if(p->next)
        {
            p->next->pre = t;
        }
    }
}
int DoublyLL :: Delete(int index)
{
    if (index < 1 || index > Length())
    {
        return -1;
    }
    Node *p = first;
    int x;
    if (index == 1)
    {
        first = first->next;
        if (first)
        {
            first->pre = NULL;
        }
        x = p->data;
        free(p);
        
    }
    else{
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
    }
    p->pre->next = p->next;
    x = p->data;
    if (p->next)
    {
        p->next->pre = p->pre;
    }
    delete p;
    }
    return x;
}
void DoublyLL :: Reverse()
{
    Node *p = first;
    while (p)
    {
        Node *temp = p->next;
        p->next = p->pre;
        p->pre = temp;

        p = p->pre;

        if (p != NULL && p->next == NULL)
        {
            first = p;
        }
    }

}
int main()
{
    int A[] = {123, 45643, 67, 8, 89, 9, 89, 54, 78, 23};
    int n = sizeof(A)/sizeof(A[0]);
    DoublyLL l(A, n);
    // l.insert(5, 10);
   // l.Delete(1);
    cout << endl;
    l.Reverse();
    l.Display();
    // cout << endl << l.Length();

}