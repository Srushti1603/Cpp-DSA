#include<iostream>

using namespace std;

int fac(int n)
{
	int s = 1;
	int i;
	for(i=1; i<=n; i++)
	{
		s = s*i;
	}
	return s;
}

int main()
{
	int x;
	cin>>x;

	cout<<fac(x);
	return 0;
}