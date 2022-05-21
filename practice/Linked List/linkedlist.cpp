#include <iostream>
using namespace std;


struct Node{
    int data;
    struct Node* next;
    
}*first = NULL;
void create(int A[], int n)
{
     struct Node* temp;
     struct Node* last;
     first = new Node;
     first->data = A[0];
     first->next = NULL;
     last = first; 
     for (int i = 1; i < n; i++)
     {
         temp = new Node;
         temp->data = A[i];
         temp->next = NULL;
         last->next = temp;
         last = temp;

     }
}
void display (struct Node *p)
{
    while(p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    
}
void rdisplay(struct Node *p)
{
    if(p != NULL)
    {
        cout << p->data << " ";
        rdisplay(p->next);
    }
}
int count(struct Node *p)
{
    int count = 0;
    while(p)
    {
        count++;
        p = p->next;
    }
    return count;
}
int max(Node* p)
{
    int max = 0;
    while(p)
    {
        if (p->data > max)
        {
            max = p->data;
        }
        p = p->next;
    }
    return max;
}
int sum (struct Node *p)
{
    int sum = 0;
    while(p)
    {
        sum += p->data;
        p = p->next;
    }
    return sum;
}
int rsum(struct Node *p)
{
    if(p == 0)
    {
        return 0;
    }
    else{
        return rsum(p->next) + p->data;
    }
}
int rcount(struct Node *p)
{
    if (p == 0)
    {
        return 0;
    }
    else
    {
        return rcount(p->next) + 1;
    }
}
int rmax (Node* p)
{
    int x = 0;
    if(p == NULL)
    {
        return 0;
    }
    x = rmax(p->next);
    if (x > p->data)
    {
        return x;
    }
    else
    {
        return p->data;
    }
}
struct Node* linearSearch(struct Node* p, int key)
{
    while (p)
    {
        if (key == p->data)
        {
            return p;
        }
        p = p->next;
    }
    return NULL;
}
struct Node* rSearch(struct Node* p, int key)
{
    if (p == NULL)
    {
        return NULL;
    }
    if (key == p->data)
    {
        return p;
    }
    return rSearch(p->next, key);
}
struct Node* firstSearch(struct Node* p, int key)
{
    struct Node* q = NULL;
    while(p)
    {
        if (key == p->data)
        {
            q->next = p->next;
            p->next = first;
            first = p;
            return p;
        }
        q = p;
        p = p->next;
    }
    return NULL;
}
void insert(struct Node *p, int pos, int key)
{
    struct Node *t;
    if(pos == 0)
    {
        t = new Node;
        t->data = key;
        t->next = first;
        first = t;
    }
    else if(pos > 0)
    {
        p = first;
        for (int i = 0; i < pos - 1 && p; i++)
        {
            p = p->next;

        }
        if (p)
        {
            t = new Node;
            t->data = key;
            t->next = p->next;
            p->next = t;

        }
    }
}
int main()
{
   // int A[] = {1, 2, 3, 4, 5};

    // create(A, 5);
    //rdisplay(first);
    
   // cout << rcount(first) << endl;

   // cout << rsum(first) << endl;
   // cout << rmax(first) <<endl;

    // struct Node* temp =linearSearch(first, 5);
    //struct Node* temp =firstSearch(first, 5);
    //cout << temp << endl;
    insert(first, 0, 10);
    insert(first, 1, 10);
    insert(first, 2, 10);
    insert(first, 3, 10);
    insert(first, 4, 10);
    insert(first, 5, 10);
    rdisplay(first);
}