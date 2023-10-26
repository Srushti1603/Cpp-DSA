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

void RightShift(struct Array *arr)
{
    arr->ln++;
    for(int i=arr->ln;i>=0;i--)
    {
        arr->A[i]=arr->A[i-1];
    }
    arr->A[0]=0;
}

int main()
{
    struct Array arr ={{2,3,5,10,15},10,5};
    RightShift(&arr);
    display(arr);

}