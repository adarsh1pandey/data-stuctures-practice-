#include <iostream>
using namespace std;
class Node 
{
    public:
        Node *lchild;
        int data;
        Node *rchild;
};
class Queue
{
    private:
        int front;
        int rear;
        int size;
        Node** Q;
    public:
        Queue()
        {
            front = rear = -1;
            this->size = 10;
            Q = new Node*[size];
        }
        Queue(int size)
        {
            front = rear = -1;
            this->size = size;
            Q = new Node*[this->size];
        }
        void enqueue(Node* value);
        Node* dequeue();
        void display();
        bool isEmpty();


};

void Queue::enqueue(Node* x) {
    if (rear == size -1){
        cout << "Queue Overflow" << endl;
    } else {
        rear++;
        Q[rear] = x;
    }
}
Node* Queue :: dequeue()
{
    Node* x = NULL;
    if (front == rear)
    {
        cout << " Queue jo hai ki empty hai " << endl;
    }
    else
    {
        x = Q[front + 1];
        front++;
    }
    return x;
}

void Queue :: display()
{
    for (int i = front + 1; i < rear; i++)
    {
        cout << Q[i] << "   ";
    }
    cout << endl;
}
bool Queue:: isEmpty()
{
    if (front == rear)
    {
        return true;
    }
    else
    {
        return false;
    }
}

