 #include<iostream>

using namespace std;

int pow(int x, int y)
{
	if(y==0)
	{
		return 1;
	}
	else
	{
		return pow(x,y-1)*x;
	
	}
}

int main()
{
	int m,n;
	cin>>m>>n;

	cout<<pow(m,n);
	return 0;
}