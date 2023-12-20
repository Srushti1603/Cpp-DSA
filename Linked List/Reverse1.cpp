#include<iostream>
using namespace std;

struct Node{
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

void Display(struct Node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<endl;
        p=p->next;
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

void Reverse1(struct Node *p)
{
   struct Node *q=NULL,*r=NULL;
   while (p!=NULL)
   {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
   }
   first=q;
}

int main()
{
    int A[]={10,20,30,40,50};
    create(A,5);
    cout<<"Elements before reversing"<<endl;
    Display(first);
    Reverse1(first);
    cout<<"Elements after reversing"<<endl;
    Display(first);
    return 0;
}