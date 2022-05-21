#include <iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node* next;
};

class Stack
{
    private:
        Node *top;
    public:
        Stack(){top = NULL;}
        void push(int value );
        int pop();
        void Display();
};


void Stack :: push(int value)
{
    Node *t;
    t = new Node;
    t->data = value;
    t->next = top;
    top = t;
}

int Stack :: pop()
{
    Node *t = top;
    top = top->next;
    int x = t->data;
    free(t);
    return x;

}

void Stack ::Display()
{
    Node *p = top;
    while(p)
    {
        cout << p->data << "   ";
        p = p->next;
    }
}

int main()
{
    Stack st;
    st.push(10340);
    st.push(10043);
    st.push(10340);
    st.push(1400);
    st.Display();
}