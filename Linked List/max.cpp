#include<iostream>
using namespace std;

struct  Node
{
   int data;
   struct  Node *next;
}*first = NULL;

void create(int A[], int n)
{
    struct  Node *t, *last;
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for(int i=1; i<n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next =NULL;
        last->next = t;
        last = t;
    }
}

int Max(struct Node *p)
{
    int max = 0 ;
    while(p!=NULL)
    {
        if(p->data>max)
        {
            max = p->data;
        }
        p = p->next;
    }  
    return max;
}

int main()
{
    int A[] = {5,2,40,6,1,10};
    create(A,6);
    
    cout<<"Maximum value is = "<<Max(first);
    return 0;
}