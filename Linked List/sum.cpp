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

int Sum(struct Node *p)
{
    int sum = 0;
    while(p!=NULL)
    {
        sum = sum + p->data;
        p = p->next;
    }
    return sum;
}

int main()
{
   int A[] = {3,4,5,6,7};
   create(A, 5);
   cout<<"Sum of elements -->"<<Sum(first);
   return 0;
}
