//Reversing a string

#include<iostream>
using namespace std;

int main()
{
    char A[] = "Python";
    char B[7];
    int i;
    int j;

    for(i=0;A[i]!='\0';i++)
    {

    }
    i=i-1;

    for(j=0;i>=0;i--,j++)
    {
        B[j] = A[i];
    }
    B[j]='\0';

    cout<<"String Before Reverse --> "<<A<<endl;
    cout<<"String After Reverse --> "<<B<<endl;
    return 0;
}