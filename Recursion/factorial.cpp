#include<iostream>

using namespace std;

int fac(int n)
{
	if(n==0)
	{
		return 1;
	}

	else
	{
		return fac(n-1)*n;
	}
}

int main()
{
	int x;
	cin>>x;

	cout<<fac(x);
	return 0;
}