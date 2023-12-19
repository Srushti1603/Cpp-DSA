#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*first=NULL;

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

int IsSorted(struct Node *p)
{
    int x = -65536;
    while(p!=NULL)
    {
        if(p->data<x)
            return 0;
        x=p->data;
        p=p->next;
    }
    return 1;
}

int main()
{
    int A[]={10,20,30,40,50};
    create(A,5);
    if(IsSorted(first)==0)
    {
        cout<<"Linked List is not Sorted"<<endl;
    }
    else if(IsSorted(first)==1)
    {
        cout<<"Linked List is Sorted"<<endl;
    }
    return 0;
}