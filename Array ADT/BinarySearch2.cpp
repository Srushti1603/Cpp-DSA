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

int RBinarSearch(int a[], int l, int h, int key)
{
    int mid;

    if(l<=h)
    {
        mid=(l+h)/2;
        if(key==a[mid])
        {
            return mid;
        }
        else if(key<a[mid])
        {
            return RBinarSearch(a,l,mid-1,key);
        }
        else{
            return RBinarSearch(a,mid+1,h,key);
        }
    }
    return -1;
}

int main()
{
    struct Array arr = {{2,3,4,5,6},10,5};
    cout<<RBinarSearch(arr.A,0,arr.length,10)<<endl;
    Display(arr);
    return 0;
}