//Reversing a string

#include<iostream>
using namespace std;

int main()
{
    char A[] = "Python";
    char B[7];
    int i;
    int j;
    int t;

    cout<<"String Before Reverse --> "<<A<<endl;

    for(j=0;A[j]!='\0';j++)
    {

    }
    j = j-1;
   
    for(i=0;i<j;i++,j--)
    {
        t = A[i];
        A[i] = A[j];
        A[j] = t;
    }

    cout<<"String After Reverse --> "<<A<<endl;
    return 0;
}