#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*first=NULL,*second=NULL,*third=NULL;

void create1(int A[],int n)
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

void create2(int A[],int n)
{
    struct Node *t, *last;
    second=new Node;
    second->data=A[0];
    second->next=NULL;
    last=second;

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

void Concatinate(struct Node *p, struct Node *q)
{
    third=p;
    while (p->next!=NULL)
    {
        p=p->next;
    }
    p->next=q;
}

int main()
{
    int A[]={10,20,30,40,50};
    create1(A,5);
    cout<<"First Linked List -->"<<endl;
    Display(first);

    int B[]={60,70,80,90,100};
    create2(B,5);
    cout<<"Second Linked List -->"<<endl;
    Display(second);

    Concatinate(second,first);
    cout<<"Concatinate Linked List -->"<<endl;
    Display(third);

    return 0;
}