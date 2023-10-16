//Time Complexity is O(2^n)

#include<iostream>

using namespace std;

void TOH(int n, int a, int b, int c)
{
	if(n>0)
	{
		TOH(n-1,a,c,b);
		cout<<"("<<a<<","<<c<<")";
		TOH(n-1,b,a,c);
	}
}

int main()
{
	int n,a,b,c;

	TOH(3,1,2,3);
	return 0;
}