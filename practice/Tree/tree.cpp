#include <iostream>
using namespace std;

struct Node
{
    struct Node* lchild;
    int data;
    struct Node* rchild;
};
struct Queue
{
        int size;
        int front;
        int rear;
        Node* *Q;
};
struct Node *root = NULL;

void create(struct Queue *q, int size)
{
    q->size = size;
    q->front = q->rear = 0;
    q->Q = new Node*;
}

void enqueue(struct Queue *q, Node* x)
{
    if ((q->rear + 1)/q->size == q->front)
    {
        cout << "Queue full hai re baba" << endl;
    }
    else 
    {
        
        q->Q[(q->rear + 1)/q->size] = x;

    }
}
Node* dequeue(struct Queue *q)
{
    Node* x = NULL;
    if (q->front == q->rear )
    {
        cout << "Queue empty hai re babaA" << endl;
    }
    else
    {
        q->front = (q->front + 1)% q->size;
        x = q->Q[q->front];
    }
    return x;
}
int isEmpty(struct Queue *q)
{
    int x = -1;
    if (q->front == q->rear)
    {
        return 1;
    }
    return -1;
}




void tcreate()
{
    struct Node *p, *t;
    int x;
    struct Queue q;
    create(&q, 100);
    cout << "enter the value of root " << endl;
    cin >> x;
    root = new Node;
    root->data = x;
    root->lchild = root->rchild = NULL;
    enqueue(&q, root);

    while(!isEmpty(&q))
    {
        p = dequeue(&q);
        cout << "enter the left child " << endl;
        cin >> x;
        if ( x != -1)
        {
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            enqueue (&q, t);

        }
        cout << "enter the right child " << endl;
        cin >> x;
        if ( x != -1)
        {
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            enqueue (&q, t);
            
        }
    }
}

void preorder(struct Node *p)
{
    if (p)
    {
        cout << p->data << "  ";
        preorder(p->lchild);
        preorder(p->rchild);
    }

}
int main()
{
    struct Queue q;
    create(&q, 10);
    tcreate();

    preorder(root);
}