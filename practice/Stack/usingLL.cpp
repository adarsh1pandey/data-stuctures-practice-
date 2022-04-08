#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
} *top = NULL;

void push(int x)
{
    Node *t = new Node;
    
    if (t == NULL)
    {
        cout << " Stack Overflow " << endl;
    }
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}

int pop()
{
    int x = -1;
    if (top == NULL)
    {
        cout << "Stack empty" << endl;
    }
    else{
        Node *p = top;
        top = top->next;
        x = p->data;
        free(p);
    }
    return x;
}
void peek(int index)
{
    if (top == NULL)
    {
        cout << "Stack is Empty " << endl;
    }
    else
    {
        Node *p = top;
        int i;
        for (i = 0; top != NULL && i < index - 1; i++)
        {
            p = p->next;
        }
        cout << p->data << endl;
    }
}
void Display()
{
    Node *p = top;
    if (top == NULL)
    {
        cout << " Stack empty " << endl;
    }
    else{
        while(p)
        {
            cout << p->data << "    ";
            p = p->next;
        }
    }
}

int main()
{
    push(10);
    push(10324);
    push(10342);

    push(3210);
    push(0);
    push(1054);
    push(0);
    push(10);
    push(1);
    Display();   
}