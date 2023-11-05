#include<iostream>
using namespace std;

struct Array
{
    int A[10];
    int sz,ln;
};

void display(struct Array arr3)
{
    cout<<"Elements in Array are"<<endl;
    for(int i=0;i<arr3.ln;i++)
    {
        cout<<arr3.A[i]<<endl;
    }
}

struct Array* Union (struct Array* arr1,struct Array* arr2)
{
    int i=0;
    int j=0;    
    int k=0;
    struct Array* arr3 = (struct Array*)malloc(sizeof(struct Array));
    
    

    while(i<arr1->ln && j<arr2->ln)
    {
        if(arr1->A[i]<arr2->A[j])
        {
		arr3->A[k++]=arr1->A[i++];
        }
        else if(arr2->A[j]<arr1->A[i])
        {
            arr3->A[k++]=arr2->A[j++];
        }
        else
        {
		arr3->A[k++]=arr1->A[i++];
		j++;        }
  	  }

    for(;i<arr1->ln;i++)
    {
         arr3->A[k++]=arr1->A[i];
    }
    for(;j<arr2->ln;j++)
    {
         arr3->A[k++]=arr1->A[j];
    }
  
    arr3->ln = k;
    return arr3;
}

int main()
{
    struct Array arr1 = {{2,6,10,15,25},10,5};
    struct Array arr2 = {{3,6,7,15,20},10,5};
    struct Array *arr3;
    arr3=Union(&arr1,&arr2);
    display(*arr3);
    return 0;  
} 