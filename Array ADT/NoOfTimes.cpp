#include<iostream>
using namespace std;

class Array
{ 
    private:
        int A[10];
        int size;
        int length;
    
    public:
        Array(int a[],int s, int l)
        {
            size=s;
            length=l;
        }

        int Duplicate(int A[]);
        int NoOfTimes(int A[]);
};

int Array::Duplicate(int A[])
{
    int n = length;
    int duplicate = 0;
    for(int i=0;i<n-1;i++)
    {
        if(A[i]==A[i+1] && A[i]!=duplicate)
        {
            cout<<A[i]<<" ";
            duplicate = A[i];
        }
    }
}

int Array::NoOfTimes(int A[])
{
    int n = length;
    int j;
    for(int i=0;i<n-1;i++)
    {
        if(A[i]==A[i+1])
        {
            j=i+1;
            while(A[i]==A[j])j++;
            cout<<A[i]<<" occurs "<<(j-i)<<" times."<<endl;
            i=j-1;
        }
    }
}

int main()
{
    int a[] = {4,5,6,6,7,8,9,9,9,10};
    Array arr(a,11,10);
    cout<<"Find Element which occurs more than one time--> ";
    arr.Duplicate(a);
    cout<<endl;
    arr.NoOfTimes(a);
    return 0;
}
