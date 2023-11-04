#include<iostream>
using namespace std;

struct Array
{
    int A[10];
    int sz,ln;
};

void swap(int *x, int*y)
{
    int temp;
    temp=*x;
    *x = *y;
    *y = temp;
}

void display(struct Array arr)
{
    cout<<"elements in array"<<endl;
    for(int i=0; i<arr.ln;i++)
    {
        cout<<arr.A[i]<<endl;
    }
}

void Rearrange(struct Array *arr)
{
   int i=0,j=arr->ln-1;
   while(i<j)
   {
        while(arr->A[i]<0)i++;
        while(arr->A[j]>=0)j++;
        if(i<j)swap(&arr->A[i],&arr->A[j]);
   }
  
}

int main()
{
    struct Array arr ={{-2,3,-5,0,-10,1},10,6};
    Rearrange(&arr);
    display(arr);
}