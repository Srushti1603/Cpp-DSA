 //Using loop

#include<iostream>

using namespace std;

int sum(int n)
{
	int s = 0;
	int i;

	for(int i=1; i<=n; i++)
	{
		s = s + i;
	}	
	
	return s;
}

int main()
{
	int x;
	cin>>x;
	
	cout<<sum(x)<<endl;
	
	return 0;
}