#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};
class LinkedList
{
    private:
        Node *first;
    public:
        LinkedList(){first = NULL;}
        LinkedList(int A[], int n);
        ~LinkedList();
        void Display();
        void Insert(int index, int x);
        int Delete (int index);
        int Length();
};


LinkedList::LinkedList(int A[], int n)
{
    Node *last, *t;
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;
    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = NULL;

        last->next = t;
        last = t;
    }
}

LinkedList ::~LinkedList()
{
    Node *p = first;
    while(first)
    {
        first = first->next;
        delete p;
        p = first;
    }
}
void LinkedList::Display()
{
    Node *p = first;
    while(p)
    {
        cout << p->data << "   ";
        p = p->next;
    }
}

int LinkedList :: Length()
{
    Node *p = first;
    int len = 0;
    while(p)
    {
        len++;
        p = p->next;
    }
    return len;
}
void LinkedList :: Insert(int index, int x)
{
    Node *p, *q = NULL;
    if (index < 0 || index > Length())
        return;

    q = new Node;
    q->data = x;
    q->next = NULL;
    if (index == 1)
    {
        q->next = first;
        first = q;
    }
    else
    {
        p = first;
        for (int i = 0; i < index - 1; i++)
        {
            p = p->next;
        }
        q->next = p->next;
        p->next = q;
    }

}

int LinkedList :: Delete(int index)
{
    int x;
    Node *p, *q = NULL;
    if (index < 0 || index > Length())
        return 0;
    else if (index == 1)
    {
        p = first;
        first = first->next;
        x = p->data;
        delete p;
    }
    else 
    {
        p = q = first;
        for (int i = 0; i < index - 1; i++)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        x = p->data;
        delete p;
    }
    return x;
}

int main()
{
    int A[] = {1, 3, 5, 6, 7, 8, 9, 21, 43, 100};
    int n = sizeof(A)/sizeof(A[0]);
    LinkedList l(A, n);
    
    l.Insert(3, 1101);

    l.Display();
}