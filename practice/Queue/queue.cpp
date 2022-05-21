#include <iostream>
using namespace std;

class Queue
{
    private:
        int size;
        int front;
        int rear;
        int *Q;;
    public:
        Queue()
        {
            size = 10;
            front = rear = -1;
            Q = new int[size];
        }
        Queue(int size)
        {
            this->size = size;
            front = rear = -1;
            Q = new int[this->size];
        }
        void enqueue(int value);
        int dequeue();
        void display();
};

void Queue :: enqueue(int data)
{
    if (rear == size -1)
    {
        cout << " Queue full hai  " << endl;
    }
    else 
    {
        rear++;
        Q[rear] = data;
    }
}
int Queue :: dequeue()
{
    int x = -1;
    if (front == rear)
    {
        cout << "Queue is empty " << endl;
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
    for (int i = front + 1; i <= rear; i++)
    {
        cout << Q[i] << "   ";
    }
}



int main()
{
    Queue Q(5);
    Q.enqueue(12);
    Q.enqueue(123);
    Q.enqueue(1245);

    Q.enqueue(14);

    Q.display();
}