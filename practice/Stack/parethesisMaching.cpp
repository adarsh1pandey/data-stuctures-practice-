#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        char data;
        Node* next;
};
class Stack 
{
    private:
        Node* top;
    public:
        Stack(){top = NULL;}
        int isEmpty();
        int isFull();
        void push(char value);
        int pop();
        int isBalanced(char *A);
        int pre(char x);
        int isOperand(char x);
        char* inToPost(char* infix);
          
};

void Stack :: push(char value)
{
    Node *t = new Node;
    if (t == NULL)
    {
        cout << "Stack Overflow " << endl;
    }
    else
    {
        t->data = value;
        t->next = top;
        top = t;

    }
}

int Stack :: pop()
{
    int x;
    Node *p = top;
    if (top == NULL)
    {
        cout << " stack is empty " << endl;
    }
    else 
    {
        x = top->data;
        top = top->next;
        free(p);
    }
    return x;
}

int Stack :: isEmpty()
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int Stack :: isFull()
{
    Node *t = new Node;
    if (t == NULL)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}

int Stack :: isBalanced (char *A)
{
    for(int i = 0; A[i] != '\0'; i++)
    {
        if (A[i] == '(')
        {
            push(A[i]);
        }
        else if(A[i] == ')')
        {
            if (isEmpty())
            {
                return false;
            }
            pop();
        }
    }
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int Stack :: pre(char x)
{
    if (x == '+' || x == '-')
    {
        return 1;
    }
    else if (x == '*' || x == '/')
    {
        return 2;
    }
    return 0;
}
int Stack :: isOperand(char x)
{
    if( x == '+' || x == '-' || x == '*' || x == '/')
    {
        return 0;
    }
    else 
    {
        return 1;
    }
}
char* Stack :: inToPost(char *infix)
{
    int i = 0, j = 0;
    char *postfix;
    int len = strlen(infix);
    postfix = new char[len + 2];

    while(infix[i] != '\0')
    {
        if (isOperand(infix[i]))
        {
            postfix[j++] = infix[i++];
        }
        else{
            if (pre(infix[i]) > pre(top->data))
            {
                push(infix[i++]);
            }
            else{
                postfix[j++] = pop();
            }
        }
    }
    while(top != NULL)
    {
        postfix[j++] = pop();
    }
    postfix[j] = '\0';

    return postfix;
}

int main()
{
    char* infix = "a+b*c";
    Stack st;
    st.push('#');
    char *postFix = st.inToPost(infix);
    cout << postFix << endl;
   

}