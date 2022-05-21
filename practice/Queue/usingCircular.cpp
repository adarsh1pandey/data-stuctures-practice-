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
            front = rear = 0;
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
    if ((rear+1)%size == front)
    {
        cout << " Queue full hai  " << endl;
    }
    else 
    {
        rear = (rear + 1)%size;
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
        
        front = (front + 1)% size;
        x = Q[front];
    }
    return x;
}
void Queue :: display()
{
    int i = front + 1;
    do 
    {
        cout << Q[i] << " ";
        i = (i + 1)%size;
    }
    while (i != rear +1);
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