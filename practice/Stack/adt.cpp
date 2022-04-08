#include <iostream>
using namespace std;

class Stack
{
    private:
        int size;
        int top;
        int *array;
    public:
        Stack(int x);
        ~Stack();
        void push(int x);
        int pop();
        void display();
        int peek(int index);
        int isEmpty();
        int isFull();

};

Stack::Stack(int size)
{
    this->size = size;
    top = -1;
    array = new int[size];
}
Stack :: ~Stack()
{
    delete[] array;
}
void Stack :: push(int x)
{
    if ( size == top)
    {
        cout << "stack overflow" << endl;
    }
    else
    {
        top++;
        array[top] = x;
    }
}
void Stack :: display()
{
    if (top == -1)
    {
        cout << "Stack underflow" << endl;
    }
    else
    {
        int i;
        for (i = top; i >= 0; i--)
        {
            cout << array[i] << endl;
        }
    }
}

int Stack :: pop()
{
    int x = 1;
    if (top == -1)
    {
        cout << "stack underflow" << endl;
    }
    else
    {
        x = array[top];
        top--;
    }
    return x;
}
int Stack :: peek(int index)
{
    int x = -1;
    if (top - index + 1 < 0)
    {
        cout << "please give valid index " << endl;
    }
    else{
        x = array[top - index + 1];
    }
    return x;
}
int Stack :: isEmpty()
{
    if (top == -1)
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
    if (top == size - 1)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}
int main()
{
    Stack st(4);
    st.push(3);
    st.push(3);
    st.push(3);
    st.push(3);
    st.push(3);
    st.push(3);
    
    //st.display();
    st.pop();
    cout << st.peek(2) << endl;
    // st.display();

}