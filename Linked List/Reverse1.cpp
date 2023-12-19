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

void Reverse(struct Node *p)
{
    int *A=new int[count(p)];
    int i=0;
    struct Node *q=p;
    while(q!=NULL)
    {
        A[i]=q->data;
        q=q->next;
        i++;
    }
    q=p;
    i--;
    while (q!=NULL)
    {
       q->data=A[i];
       q=q->next;
       i--; 
    }
    
}

int main()
{
    int A[]={10,20,30,40,50};
    create(A,5);
    cout<<"Elements before reversing"<<endl;
    Display(first);
    Reverse(first);
    cout<<"Elements after reversing"<<endl;
    Display(first);
    return 0;
}