#include<iostream>
using namespace std;

struct Array
{
    int A[10];
    int sz, len;
};

void display(struct Array arr)
{
    cout<<"elements in array"<<endl;
    for(int i=0; i<arr.len;i++)
    {
        cout<<arr.A[i]<<endl;
    }
}

void leftShift(struct Array *arr)
{
    int i;
    int x = arr->A[0];
    for(i=0;i<arr->len-1;i++)
    {
        arr->A[i]=arr->A[i+1];
    }  
    arr->A[i]= x;
}

int main()
{
    struct Array arr = {{1,2,3,4,5},10,5};
    leftShift(&arr);
    display(arr);
    
    return 0;  
} 
