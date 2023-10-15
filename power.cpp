#include<iostream>

using namespace std;

int pow(int x, int y)
{
	if(y==0)
		return 1;
	if(y%2==0)
		return pow(x*x,(y/2));
	else
		return x*pow(x*x,(y-1)/2);
}

int main()
{
	int m,n;
	cin>>m>>n;

	cout<<pow(m,n);

	return 0;
}