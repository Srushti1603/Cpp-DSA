#include<iostream>

using namespace std;

struct Array
{
	int A[10];
	int size;
	int length;
};

void insert(struct Array *arr, int index, int x)
{
	if(index>0 && index <= arr->length)
	{
		for(int i=arr->length; i>index; i--)
		{
			arr->A[i] = arr->A[i-1];
		}
		arr->A[index] = x;
		arr->length++;
	}
}

void Display(struct Array arr)
{
	cout<<"Elements in array are:"<<endl;
	for(int i=0; i<arr.length; i++)
	{
		cout<<arr.A[i]<<endl;
	}
}

int main()
{
	struct Array arr = {{2,3,4,5,6},10,5};
	insert(&arr,3,10);
	Display(arr);
	return 0;
}