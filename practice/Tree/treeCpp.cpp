#include <iostream>
#include "queue.hh"
using namespace std;

class Tree
{
    public:
        Node* root;
        Tree()
        {
            root = NULL;

        }
        void createTree();
        void preOrder(Node *p);
        void postOrder(Node *p);
        void inOrder(Node *p);
        void levelOrder(Node *p);
        void Height(Node *root);
};

void Tree :: createTree()
{
    Node *p, *t;
    int x;
    Queue q(100);
    cout << " enter the value of root " << endl;
    cin >> x;
    root = new Node;
    root->data = x;
    root->lchild = root->rchild = NULL;
    q.enqueue(root);
    while(! q.isEmpty())
    {
        p = q.dequeue();
        cout << "enter the left child " << endl;
        cin >> x;

        if (x != -1)
        {
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            q.enqueue(t);
        }    
        cout << "enter the value of right child " << endl;
        cin >> x;
        if ( x != -1)
        {
            t = new Node;
            t->data =x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            q.enqueue(t);
        }
    }
    
}
void Tree :: preOrder(Node *p)
{
    if (p)
    {
        cout << p->data << "   ";
        preOrder(p->lchild);
        preOrder(p->rchild);
    }
}

void Tree :: postOrder(Node *p)
{
    if (p)
    {
        
        preOrder(p->lchild);
        preOrder(p->rchild);
        cout << p->data << "   ";
    }
}
void Tree :: inOrder(Node *p)
{
    if (p)
    {
        
        preOrder(p->lchild);
        cout << p->data << "   ";
        preOrder(p->rchild);
    }
}

int main()
{
    Tree t;
    t.createTree();
    t.preOrder(t.root);
}