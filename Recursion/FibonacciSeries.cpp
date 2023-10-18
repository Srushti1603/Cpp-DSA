//Time complexity is O(2^n) 

#include<iostream>

using namespace std;

int fib(int n)
{
	if(n<=1)
	{
		return n;
	}
	else
	{
		return fib(n-2)+fib(n-1);
	}
}

int main()
{
	int m;
	cout<<fib(7);
	return 0;
}