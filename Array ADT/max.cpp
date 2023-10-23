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

int max(struct Array arr)
{
    int max=arr.A[0];
    for(int i=1;i<arr.length;i++)
    {
        if(arr.A[i]>max)
         max=arr.A[i];
    }
 
    return max;
}

int main()
{
    int index;
    struct Array arr = {{10,34,5,69,2},10,5};
    cout<<"Print the Largest element "<<max(arr)<<endl;
   
    Display(arr);

    return 0;
} 
