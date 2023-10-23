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

int Get(struct Array arr,int index)
{
    if(index>0 && index<arr.length)
    {
        return arr.A[index];
    }

    return -1;
}

int main()
{
    int index;
    struct Array arr = {{2,3,4,5,6},10,5};
    cout<<"Value at which index you want to see?"<<endl;
    cin>>index;

    cout<<"The value at index "<<index<<" is "<<Get(arr,index)<<endl;

    Display(arr);

    return 0;
} 
