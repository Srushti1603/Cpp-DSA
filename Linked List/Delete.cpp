#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*first = NULL;

void create(int A[],int n)
{
    struct Node *t,*last;
    first=new Node;
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(int i=1;i<n;i++)
    {
        t=new Node;
        t->data=A[i];
        t->next=NULL;
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

int Delete(struct Node *p,int index)
{
    struct Node *q=NULL;
    int x=-1;

    if(index<1 || index>count(p))
    {
        return -1;
    }

    if(index==1)
    {
        q=first;
        x=first->data;
        first=first->next;
        delete q;
        return x;
    }
    else
    {
        for(int i=0;i<index-1;i++)
        {
            q=p;
            p=p->next;
        }
        q->next=p->next;
        x=p->data;
        delete p;
        return x;
    }
}

int main()
{
    int A[]={10,20,30,40,50};
    create(A,5);
    cout<<"Deleted value -> "<<Delete(first,2)<<endl;
    cout<<"Display Values"<<endl;
    Display(first);
    return 0; 
}