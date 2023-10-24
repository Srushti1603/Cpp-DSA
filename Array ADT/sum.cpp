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

int sum(struct Array arr)
{
    int Tot = 0;
    for(int i=0;i<arr.length;i++)
    {
        Tot = Tot + arr.A[i];
    }
 
    return Tot;
}

int main()
{
    int index;
    struct Array arr = {{10,34,5,69,2},10,5};
    cout<<"Print the Sum of all elements in array "<<sum(arr)<<endl;
   
    Display(arr);

    return 0;
} 
