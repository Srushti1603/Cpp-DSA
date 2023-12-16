#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*first = NULL;

void create(int A[],int n)
{
    struct Node *t,*last;
    first  = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for(int i=1; i<n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next=t;
        last = t;
    }
}

struct Node* LSearch(struct Node *p, int key)
{
    struct  Node *q=NULL;
    
    while(p!=NULL)
    {
        q=p;
        if(key == p->data)
        {
            q->next= p->next;
            p->next = first;
            first= p;
            return p;
        }
        p = p->next;
    }
    return NULL;
}

int main()
{
    struct  Node *temp;
    int A[] = {2,4,6,10,12};
    create(A,5);
    temp = LSearch(first,11);
    if(temp)
      cout<<"Key is found --> "<<temp->data;
    else
      cout<<"Key is not found ";  
    return 0;
}