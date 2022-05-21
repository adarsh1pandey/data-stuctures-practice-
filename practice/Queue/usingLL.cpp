#include <iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node* next;
} *first = NULL, *rear = NULL;

void enqueue(int x)
{
    Node *t = new Node;
    if (t == NULL)
    {
        cout << "Full heap" << endl;
    }
    else
    {
        
        t->data = x;
        if (first == NULL)
        {
            first = rear = t;
        }
        else
        {
            rear->next = t;
            t = rear;
        }
    }
}

int dequeue()
{
    int x = -1;
    if (first == NULL)
    {
        cout <<"enpty" << endl;
    }
    else
    {
        Node *p = first;
        first = first->next;
        x = p->data;
        free(p);
    }
    return x;
}
void display()
{
    Node *p = first;
    while(p)
    {
        cout << p->data << "  ";
        p = p->next;
    }
}

int main()
{
    enqueue(5);
    enqueue(7);
    enqueue(9);
    dequeue();

    display();
}