#include<iostream>

#include<stdio.h>

using namespace std;
int main()
{
    int A[5] = {2,4,6,8,10};
    int *p;
    p =(int *)malloc(5*sizeof(int));
    p[0] = 1;
    p[1] = 3;
    p[2] = 5;
    p[3] = 7;
    p[4] = 9; 

    
    for(int i=0;i<5;i++)
    {
        cout<<A[i]<<endl;
    }

    cout<<"********"<<endl;

    for(int i=0;i<5;i++)
    {
        cout<<p[i]<<endl;
    }
    return 0;
} 
