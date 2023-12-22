#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*head=NULL;

void create(int A[],int n)
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

void Display(struct Node *h)
{
    do
    {
        cout<<h->data<<" ";
        h=h->next;

    } while (h!=head);
    
}

int Length(struct Node *p)
{
    int len = 0;
    do
    {
        len++;
        p=p->next;
    } while (p!=head);
    
}

void insert(struct Node *p,int index,int val)
{
    struct Node *t;

    if(index<0 || index>Length(p))
    {
        return;
    }

    if(index==0)
    {
        t=new Node;
        t->data=val;
        if(head==NULL)
        {
            head=t;
            head->next=head;
        }
        else
        {
            while(p->next!=head)
            {
                p=p->next;
            }
            p->next=t;
            t->next=head;
            head=t;
        }
    }
    else
    {
        for(int i=0;i<index-1;i++)
        {
            p=p->next;
        }
        t=new Node;
        t->data=val;
        t->next=p->next;
        p->next=t;
    }
}

int main()
{
    int A[]={10,20,30,40,50};
    create(A,5);
    insert(head,5,15);
    cout<<"Display -->"<<endl;
    Display(head);
    return 0;
}
