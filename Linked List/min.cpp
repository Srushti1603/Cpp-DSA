#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*first = NULL;

void create(int A[],int n)
{
    struct Node *t,*last;
    first = new Node;
    first->data=A[0];
    first->next=NULL;
    last = first;

    for(int i=1;i<n;i++)
    {
        t = new Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

int min(struct Node *p)
{
    int m = 230;
    while (p!=NULL)
    {
        if(m>p->data)
        {
         m = p->data;
        }
        p=p->next;
    }
    return m;
}

int main()
{
    int A[] = {2,4,6,1,10};
    create(A,5);
    cout<<"Minimum Element is -> "<<min(first);
    return 0;
}