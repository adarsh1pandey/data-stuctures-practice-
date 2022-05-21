#include <iostream>
using namespace std;


struct Node 
{
    char data;
    Node* next;
}*top = NULL;

void push(char data)
{
    struct Node *t;
    t = new Node;
    t->data = data;
    t->next = top;
    top = t;
}

char pop()
{
    struct Node *t = top;
    top = top->next;
    char x = t->data;
    free(t);
}