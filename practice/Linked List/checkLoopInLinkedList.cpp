#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *next;
}*first = NULL;

void create(int A[], int n)
{
    Node *p, *temp;
    p = new Node;
    p->data = A[0];
    p->next = NULL;
    first = p;
    for (int i = 1; i < n; i++)
    {
        temp = new Node;
        temp->data = A[i];
        temp->next = NULL;

        p->next = temp;
        p = temp;
    }
}
int isLoop()
{
    Node *p, *q;
    p = q = first;
    do
    {
        p = p->next;
        q = q->next;
        q = q?q->next:q;
        
    } while (q && p && p != q);

    if (p == q)
        return 1;
    else 
        return 0;
    
}

void display()
{
    Node *p = first;
    while(p)
    {
        cout << p->data << "    ";
        p = p->next;
    }
}


int main()
{
    Node *t1, *t2;
    
    int A[] = {1, 3, 5, 6, 78, 8, 9, 89};
    int n = sizeof(A)/sizeof(A[0]);
    create(A, n);
    t1 =first->next->next;
    t2 = first->next->next->next->next->next->next->next;
    t2->next = t1;
   // display();
    cout << endl;
    cout << isLoop() << "    " << endl;
}