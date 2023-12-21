#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*head=NULL;

void Create(int A[], int n)
{
    struct Node *t, *last;
    head=new Node;
    head->data=A[0];
    head->next=head;
    last=head;

    for (int i=1; i<n; i++)
    {
        t=new Node;
        t->data=A[i];
        t->next=last->next;
        last->next=t;
        last=t;
    }
    
}

void Display(struct Node *p)
{
    do
    {
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=head);
}

int main()
{
    int A[]={10,20,30,40,50};
    Create(A,5);
    cout<<"Elements in Linked List -->"<<endl;
    Display(head);
    return 0;
}