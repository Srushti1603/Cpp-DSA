#include<iostream>

using namespace std;

struct Array
{ 
	int A[10];
	int size,length;

};

void Display(struct Array arr)
{
	cout<<"Print Elements in array : "<<endl;
	for(int i=0;i<arr.length;i++)
	{
		cout<<arr.A[i]<<endl;
	}

}

void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int LinearSearch(struct Array *arr, int key)
{
	for(int i=0;i < arr->length;i++)
	{
		if(key==arr->A[i])
		{
			swap(&arr->A[i],&arr->A[i-1]);
			return i;
		}
	}
	return -1;
}

int main()
{
	struct Array arr = {{2,3,4,5,6},10,5};
	cout<<LinearSearch(&arr,5)<<endl;
	Display(arr);
}