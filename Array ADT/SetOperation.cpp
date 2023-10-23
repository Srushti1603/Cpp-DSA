#include<iostream>
using namespace std;

struct Array{
    int A[10];
    int size, length;
};

void Display(struct Array arr)
{
    cout<<"Elements in array are : "<<endl;
    for(int i=0;i<arr.length;i++)
    {
        cout<<arr.A[i]<<endl;
    }
}

int Set(struct Array *arr,int index, int x)
{
    if(index>0 && index<arr->length)
    {
        arr->A[index]=x;
    }

    return -1;
}

int main()
{
    int index, x ;
    struct Array arr = {{2,3,4,5,6},10,5};
    cout<<"Value at which index you want to set whuch value?"<<endl;
    cin>>index>>x;

    cout<<"The value at index "<<index<<" is modified as "<<Set(&arr,index,x)<<endl;

    Display(arr);

    return 0;
} 
