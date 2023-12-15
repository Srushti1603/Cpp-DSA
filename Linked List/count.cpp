#include<iostream>
using namespace std;

struct  Node
{
    int data;
    struct  Node *next;
}*first = NULL;

void create(int A[], int n)
{
    struct Node *t, *last;
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for(int i=1; i<n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

int count(struct Node *p)
{
    int c = 0;
    while(p)
    {
        c = c + 1;
        p = p->next;
    }
    return c;
}

int main()
{
    int A[] = {2,4,6,8,10,12};
    create(A,6);
    cout<<"Total no of nodes in Linked list --> "<<count(first);
    return 0;
}