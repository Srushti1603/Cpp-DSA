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

void insert(struct Array *arr,int x)
{
    int i = arr->ln-1;
    if(arr->ln==arr->sz)
        return;
    while(i>=0 && arr->A[i]>x)  
    {
        arr->A[i+1]=arr->A[i];
        i--;
    }  
    arr->A[i+1]=x;
    arr->ln++;
}

int main()
{
    struct Array arr ={{2,3,5,10,15},10,5};
    insert(&arr,1);
    display(arr);

}