#include<iostream>
using namespace std;

int main()
{
    int A[] = {8,3,6,4,6,5,6,8,2,7};
    int n = 10;
    int H[9] = {0};
    for(int i=0;i<10;i++)
    {
        H[A[i]]++;
    }
    for(int j=0;j<9;j++)
    {
        if(H[j]==1)
        {
            cout<<j<<" is present"<<endl;
        }
        else if(H[j]>1)
        {
            cout<<j<<" is duplicate"<<endl;
        }
    }
    return 0;
}