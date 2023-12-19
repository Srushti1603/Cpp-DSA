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

void Display(struct Node *p)
{
    while (p!=NULL)
    {
       cout<<p->data<<endl;
       p=p->next;
    }
}

void RemoveDuplicate(struct Node *p)
{
    struct Node *q=p->next;
    while (q!=NULL)
    {
        if(p->data!=q->data)
        {
            p=q;
            q=q->next;
        }
        else
        {
            p->next=q->next;
            delete q;
            q=p->next;
        }
    }
    
}

int main()
{
    int A[]={10,20,20,30,40,50,50,50};
    create(A,8);
    cout<<"Elements in LL ->"<<endl;
    Display(first);
    RemoveDuplicate(first);
    cout<<"Elements in LL after removing duplicate ->"<<endl;
    Display(first);
    return 0;
}