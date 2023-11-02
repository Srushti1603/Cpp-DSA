#include<iostream>
using namespace std;

struct Array
{
    int A[10];
    int sz,ln;
};

void display(struct Array arr)
{
    cout<<"elements in array"<<endl;
    for(int i=0; i<arr.ln;i++)
    {
        cout<<arr.A[i]<<endl;
    }
}

int isSorted(struct Array arr)
{
   int i;
   for(int i=0;i<arr.ln-1;i++)
   {
        if(arr.A[i]>arr.A[i+1])
            return 0;
   }
   return 1;
}

int main()
{
    struct Array arr ={{2,3,5,10,1},10,5};
    cout<<isSorted(arr)<<endl;
    display(arr);
}