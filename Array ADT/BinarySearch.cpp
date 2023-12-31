#include<iostream>

using namespace std;

struct Array
{
    int A[10];
    int size;
    int length; 
};

void Display(struct Array arr)
{ 
    int i;
    cout<<"Elements in array are : "<<endl;
    for(int i=0; i<arr.length; i++)
    {
        cout<<arr.A[i]<<endl;
    }
}

int BinarySearch(struct Array arr, int key)
{
    int l=0 ,h=arr.length-1 ,mid;
    while(l<=h)
    {
        mid = (l+h)/2 ;
        if(key==arr.A[mid])
        {
            return mid;
        }
        else if(key<arr.A[mid])
        {
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return -1;
}

int main()
{
    struct Array arr = {{2,3,4,5,6},10,5};
    cout<<BinarySearch(arr,10)<<endl;
    Display(arr);
    return 0;
}