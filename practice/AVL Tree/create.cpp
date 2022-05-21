#include<iostream>
using namespace std;

class Node 
{
    public: 
        Node* lchild;
        int data;
        int height;
        Node* rchild;
} *root = NULL;

int nodeHeight(Node *p)
{
    int hl, hr;
    hl = p && p->lchild ? p->lchild->height : 0; 
    hr = p && p->rchild ? p->rchild->height : 0;    
    return hl > hr ? hl + 1 : hr + 1; 
}
int balanceFactor(Node* p)
{
    int hl;
    int hr;
    hl = p && p->lchild ? p->lchild->height : 0;
    hr = p && p->rchild ? p->rchild->height : 0;
    return hl - hr;
}

Node* llRotation(Node *p)
{
    Node* pl = p->lchild;
    Node* plr = pl->rchild;
    pl->rchild = p;
    p->lchild = plr;
    p->height = nodeHeight(p);
    pl->height = nodeHeight(pl);

    if (root == p)
        root = p;


    return pl;
}
Node* lrRotation(Node* p)
{
    Node *pl = p->lchild;
    Node* plr = pl->rchild;

    plr->lchild = pl->rchild;
    plr->rchild = p->lchild;

    plr->lchild = pl;
    plr->rchild = p;
    pl->height = nodeHeight(pl);
    p->height = nodeHeight(p);
    plr->height = nodeHeight(plr);
    if (p == root)
        root = plr;

    return plr;
}
Node* rInsert(Node *p, int key)
{
    Node *t;
    if (p == NULL)
    {
        t = new Node;
        t->data = key;
        t->height = 1;
        t->lchild = t->rchild = NULL;
        return t;
    }
    if (key < p->data)
    {
        p->lchild = rInsert(p->lchild, key);
    }
    else if (key > p->data)
    {
        p->rchild = rInsert(p->rchild, key);
    }
    p->height = nodeHeight(p);
    if (balanceFactor(p) == 2 && balanceFactor(p->lchild) == 1)
    {
        return llRotation(p);
    }
    else if(balanceFactor(p) == 2 && balanceFactor(p->lchild) == -1)
    {
        return lrRotation(p);
    }
    // else if(balanceFactor(p) == -2 && balanceFactor(p->rchild) == -1)
    // {
    //     return rrRotation(p);
    // }
    // else if(balanceFactor(p) == -2 && balanceFactor(p->lchild) == 1)
    // {
    //     return rlRotation(p);
    // }
    return p;
}


int main()
{
    root = rInsert(root, 10);
    rInsert(root, 5);
    rInsert( root, 7);

    cout << root->data << endl;
}