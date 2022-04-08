#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};

class CircularLinkedList
{
    private:
        Node *head;
    public:
        CircularLinkedList(){Node *head;}
        CircularLinkedList(int A[], int n);
        void Display();
        void rDisplay();
        void Insert(int pos, int x);
        int Delete(int index);
};

CircularLinkedList :: CircularLinkedList(int A[], int n)
{
    Node *last, *t;
    head = new Node;
    head->data = A[0];
    head->next = head;
    last = head;
    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }
}

void CircularLinkedList :: Display()
{
    Node *p = head;
    do 
    {
        cout << p->data << "  ";
        p = p->next;
    }
    while(p != head);
    
}
void CircularLinkedList :: rDisplay()
{
    Node *p = head;
    static int flag = 0;
    while (head != p || flag == 0)
    {
        cout << p->data;
        p = p->next;
        rDisplay();
    }
    flag = 1;
}
void CircularLinkedList :: Insert(int pos, int x)
{
    Node *t, *p;
    int i;
    if (pos == 0)
    {
        if(head == NULL)
        {
            t = new Node;
            t->data = x;
            t->next = head;
        }
        else
        {
            p = head;
            t = new Node;
            t->data = x;
            while(p->next != head)
            {
                p = p->next;
            }
            p->next = t;
            t->next = head;
            head = t;

        }
    }
    else
    {
        p = head;
        for (int i = 0; i < pos - 1; i++)
        {
            p = p->next;
        }
        t = new Node;
        t->data = x;
        t->next = p->next;
        p->next = t;
    }   
}
int CircularLinkedList :: Delete(int index){
    
}
int main()
{
   
    int A[] = {1, 3, 54, 6, 78, 98, 9, 0, 89};
    int n = sizeof(A)/sizeof(A[0]);
    CircularLinkedList cl(A, n);
    //cl.Insert(2, 5678);
    cl.Delete(3);
    cl.Display();
}