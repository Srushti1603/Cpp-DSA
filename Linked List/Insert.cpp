#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*first=NULL;

void create(int A[],int n)
{
    struct Node *t, *last;
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for(int i =1; i<n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next=t;
        last=t;
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

void Insert(struct  Node *p,int index,int x)
{
    struct Node *t;
    if(index <0 || index>count(p))
    {
        return;
    }

    t = new Node;
    t->data = x;

    if(index==0)
    {
        t->next = first;
        first = t;
    } 
    else
    {
        for(int i=0;i<index-1;i++)
        {
            p=p->next;
        }
        t->next = p->next;
        p->next = t;
    }
}

int main()
{
    int A[] = {2,4,6,8,10,12};
    create(A,6);
    Insert(first,3,7);
    Display(first);
    return 0;
}