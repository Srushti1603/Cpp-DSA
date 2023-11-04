#include<iostream>
using namespace std;

struct Array
{
    int A[10];
    int sz,ln;
};

void display(struct Array arr3)
{
    cout<<"elements in array"<<endl;
    for(int i=0; i<arr3.ln;i++)
    {
        cout<<arr3.A[i]<<endl;
    }
}

struct Array* Merge(struct Array *arr1,struct Array *arr2)
{
    int i=0,j=0,k=0;
    struct Array *arr3 = (struct Array*)malloc(sizeof(struct Array));
    int n = arr2->ln;
    int m = arr1->ln;
    while(i<m && j<n)
    {
        if(arr1->A[i]<arr2->A[j])
        {
            arr3->A[k++]=arr1->A[i++];
        }
        else
        {
            arr3->A[k++]=arr2->A[j++];
        }
    }
    for(;i<m;i++)
        {
            arr3->A[k++]=arr1->A[i];
        }
        for(;j<n;j++)
        {
            arr3->A[k++]=arr2->A[j];
        }
        arr3->ln = arr1->ln + arr2->ln;
        arr3->sz=10;
        return arr3;
}

int main()
{
    struct Array arr1 ={{2,5,11,15,23},10,5};
    struct Array arr2 ={{1,3,12,17,25},10,5};
    struct Array *arr3;
    arr3=Merge(&arr1,&arr2);
    display(*arr3);

}