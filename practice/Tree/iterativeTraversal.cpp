#include<iostream>
using namespace std;

class Node 
{
    public:
        Node* lchild;
        int data;
        Node* rchild;
};
class Queue
{
    private:
        int front;
        int size;
        int rear;
        int* Q;
    
    public:
        Queue()
        {
            front = rear = -1;
            size = 10;
            Q = new Node *[size];

        }


}