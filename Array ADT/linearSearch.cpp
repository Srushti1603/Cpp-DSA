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

int LinearSearch(struct Array arr, int key)
{
	for(int i=0; i<arr.length;i++)
	{
		if(key==arr.A[i])
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	int x;
	struct Array arr = {{2,3,4,5,6},10,5};
	cout<<"Enter which you have to find "<<endl;
	cin>>x;
	cout<<LinearSearch(arr,x)<<endl;
	Display(arr);
}