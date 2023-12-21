#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*first=NULL,*second=NULL,*third=NULL;

void create(int A[],int n)
{
    struct Node *t, *last;
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

void Display(struct Node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

int IsLoop(struct Node *f)
{
    struct Node *p,*q;
    p=q=f;
    do
    {
        p=p->next;
        q=q->next;
        q=q?q->next:q;
    } while(p && q && p!=q);
    
    if(p==q)
        return 1;
    else
        return 0;    

}

int main()
{
    struct Node *t1,*t2;

    int A[]={10,20,30,40,50};
    create(A,5);
    t1=first->next->next;
    t2=first->next->next->next->next;
    t2->next=t1;
    if(IsLoop(first)==1)
    {
        cout<<"Linked List is Loop"<<endl;
    }
    else
    {
        cout<<"Linked List is not Loop"<<endl;   
    }
    return 0;
}