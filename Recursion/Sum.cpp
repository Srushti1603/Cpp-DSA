//By Recursive function Method

#include<iostream>

using namespace std;

int sum(int n)
{
	if(n==0)
	{
		return 0;
	}
	
	else
	{
		return sum(n-1) + n;
	}
	
}

int main()
{
	int a;
	cout<<"Sum of how many natural numbers you want? "<<endl;
	cin>>a;

	cout<<"The sum of first "<<a<<" natural numbers is : "<<sum(a)<<endl;
	
	return 0;
}