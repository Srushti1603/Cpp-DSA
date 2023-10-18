#include<iostream>

using namespace std;

double e(int y, int m)
{	static double s = 1;
	if(m==0)
		return s;
	else
		s=1+y*s/m;
	return e(y,m-1);
}

int main()
{
	int x,n;
	cin>>x>>n;

	cout<<e(x,n);

	return 0;
}