#include<iostream>
using namespace std;

class Array
{
    private:
        int A[10];
        int size;
        int length;

    public:
        Array(int arr[],int s, int l)
        {
            size = s;
            length = l;
            for(int i=0;i<length;i++)
            {
                A[i]=arr[i];
            }
        }  
        int MissingElement(int arr[]);
};

int Array::MissingElement(int arr[])
{
    int l = arr[0];
    int diff = l-0;
    int ele;
    for(int i=0; i<length;i++)
    {
        if(diff!=A[i]-i)
        {
            ele = diff + i;
            break;
        }
    }
    return ele;
}
int main()
{
    int arr[] = {6,7,8,9,11,12,13,14};
    Array Arr(arr,10,8);
    cout<<"Missing Element is "<<Arr.MissingElement(arr)<<endl;
}