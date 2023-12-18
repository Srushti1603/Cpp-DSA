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

void InsertAtLast(int x)
{
    struct Node *last = new Node, *t=new Node; 
    t->data=x;
    t->next=NULL;

    if(first==NULL)
    {
        first=last=t;
    }   
    else
    {
        last->next=t;
        last=t;
    }
}

int main()
{
    cout<<"Linked list -->"<<endl;
    InsertAtLast(18);
    cout<<"---"<<endl;
    Display(first);
    return 0;
}