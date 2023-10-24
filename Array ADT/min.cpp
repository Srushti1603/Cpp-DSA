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

int min(struct Array arr)
{
    int min=arr.A[0];
    for(int i=1;i<arr.length;i++)
    {
        if(min>arr.A[i])
        {
            min=arr.A[i];
        }
    }
    return min;
}

int main()
{
    int index;
    struct Array arr = {{10,34,5,69,2},10,5};
    cout<<"Print the smallest element "<<min(arr)<<endl;
   
    Display(arr);

    return 0;
} 
