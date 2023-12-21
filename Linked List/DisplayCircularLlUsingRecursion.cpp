#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*head=NULL;

void Create(int A[],int n)
{
    struct Node *t,*last;
    head=new Node;
    head->data=A[0];
    head->next=head;
    last=head;

    for(int i=1;i<n;i++)
    {
        t=new Node;
        t->data=A[i];
        t->next=last->next;
        last->next=t;
        last=t; 
    }
}

void RDisplay(struct Node *p)
{
    static int flag=0;
    if(p!=head || flag==0)
    {
        flag=1;
        cout<<p->data<<" ";
        RDisplay(p->next);
    }
    flag=0;
}

int main()
{
    int A[]={10,20,30,40,50};
    Create(A,5);

    cout<<"Display Linked List -->"<<endl;
    RDisplay(head);
    return 0;
}