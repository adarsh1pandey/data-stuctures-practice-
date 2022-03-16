#include <iostream>
using namespace std;
class Node{
    public: 
    int data;
    Node* next;
} *first = NULL;

void Lastll(int x)
{
    Node *last;
    Node *t = new Node;
    t->data = x;
    t->next = NULL;
    last = first;
    if (first == NULL)
    {
        first = last = t;
    }
    else 
    {
        last->next = t;
        last = t;
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

Lastll(5);
Lastll(4);
Lastll(3);
Display();

}