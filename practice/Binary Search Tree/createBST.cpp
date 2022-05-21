#include <iostream>
using namespace std;

class Node 
{
    public:
        Node* lchild;
        int data;
        Node* rchild;
}*root = NULL;

void Insert(int key)
{
    Node *t = root;
    Node *r, *p;
    if (root == NULL)
    {
        p = new Node;
        p->data = key;
        p->lchild = p->rchild = NULL;
        root = p;
        return;
    }
    while (t != NULL)
    {
        r = t;
        if (key < t->data)
            t = t->lchild;
        else if(key > t->data)
            t = t->rchild;
        else 
            return;
        
    }
    p = new Node;
    p->data = key;
    p->lchild = p->rchild = NULL;

    if (key < r->data)
    {
        r->lchild = p;
    }
    else{
        r->rchild = p;
    }
}

void Inorder(Node* p)
{
    if (p)
    {
        Inorder(p->lchild);
        cout << p->data << "   ";
        Inorder(p->rchild);
    }
}
Node* search(int key)
{
    Node* t = root;
    while(t != NULL)
    {
        if (key == t->data)
            return t;
        else if (key < t->data)
            t = t->lchild;
        else
            t = t->rchild;
    }
    return NULL;
}
Node * rInsert(Node *p, int key)
{
    Node *t;
    if ( p == NULL)
    {
        t = new Node;
        t->data = key;
        t->lchild = t->rchild = NULL;
        return t;
    }

    if(key < p->data)
    {
        p->lchild = rInsert(p->lchild, key);
    }
    else if(key > p->data)
        p->rchild = rInsert(p->rchild, key);

    return p;
}
int Height(Node *p)
{
    int x, y;
    if (p == NULL) return 0;
    x = Height(p->lchild);
    y = Height(p->rchild);
    return x > y ? x+1: y+1;
}
Node * InPre(Node *p)
{
    while (p && p->rchild != NULL)
    {
        p = p->rchild;
    }
    return p;
}
Node * InSucc(Node *p)
{
    while (p && p->lchild != NULL)
    {
        p = p->lchild;
    }
    return p;
}
Node * Delete(Node *p, int key)
{
    struct Node *q;
    if (p == NULL)
    {
        return NULL;
    }
    if (p->lchild == NULL && p->rchild == NULL)
    {
        if (p == root)
        {
            root = NULL;
        }
        free(p);
        return NULL;
    }
    if (key < p->data)
    {
        p->lchild = Delete(p->lchild, key);
    }
    else if (key > p->data)
    {
        p->rchild = Delete(p->rchild, key);
    }
    else
    {
        if (Height(p->lchild) > Height(p->rchild))
        {
            q = InPre(p->lchild);
            p->data = q->data;
            p->lchild = Delete(p->lchild, p->data);
        }
        else
        {
            q = InSucc(p->lchild);
            p->data = q->data;
            p->rchild = Delete(p->rchild, p->data);
        }
    }
    return p;       

}

int main()
{
    Node *temp = NULL;
    // Insert(10);
    // Insert(6);
    // Insert(15);
    // Insert(95);
    // Insert(8);
    // Inorder(root);
    root = rInsert(root,10);
     rInsert(root,6);
     rInsert(root,15);
     rInsert(root, 95);
     rInsert(root, 8);
     
    Delete(root, 95);

     Inorder(root);
    temp = search(8);
    if (temp != NULL)
    {
        cout << " element found " << endl;
    }
    else{
        cout << "not found " << endl;
    }
}