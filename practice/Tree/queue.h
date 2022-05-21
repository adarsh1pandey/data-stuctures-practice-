class Queue
{
    private:
        int front;
        int rear;
        int size;
        int *Q;
    public:
        Queue()
        {
            front = rear = -1;
            this->size = 10;
            Q = new int[size];
        }
        Queue(int size)
        {
            front = rear = -1;
            this->size = size;
            Q = new int[this->size];
        }
        void enqueue(int value);
        int dequeue();
        void display();


};

void Queue :: enqueue(int value)
{
    if ((rear + 1)%size == front)
    {
        cout << "Queue full hai re baba " << endl;
    }
    else
    {
        Q[(rear + 1)%size] = value;
    }
}
int Queue :: dequeue()
{
    int x = -1;
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