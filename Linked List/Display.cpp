#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*first = NULL;

void create(int A[], int n)
{
    struct Node *t,*last;
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

void Display(struct  Node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<endl;
        p = p->next;
    }
}

int main()
{
    int A[] = {2,4,1,10,15};
    create(A,5);
    cout<<"Elements in Linked List are --> "<<endl;
    Display(first);
    return 0;
}