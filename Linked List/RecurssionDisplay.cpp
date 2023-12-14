#include<iostream>
using namespace std;

struct Node
{
   int data;
   struct Node *next;
}*first = NULL;

void create(int A[], int n)
{
   struct Node *t, *last;
   first = new Node;
   first->data = A[0];
   first->next = NULL;
   last = first;

   for(int i=1; i<n; i++)
   {
      t = new Node;
      t->data = A[i];
      t->next = NULL;
      last->next = t;
      last = t;
   }
}

void R2Display(struct Node *p)
{
   if(p!=NULL)
   {
      R2Display(p->next);
      cout<<p->data<<endl;
   }
}

int main()
{
   int A[] = {3,4,5,6,7};
   create(A, 5);
   cout<<"Elements -->"<<endl;
   R2Display(first);
   return 0;
}