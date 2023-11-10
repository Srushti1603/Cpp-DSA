//Toggle the string
//Numerical character or special character will not change

#include<iostream>
using namespace std;

int main()
{
    char A[] = "wElCome";
    int i;
    for(i=0;A[i]!='\0';i++)
    {
        if(A[i]>=65 && A[i]<=90)
        {
            A[i] = A[i] + 32;
            //Since ascii code for a and A has difference of 32
        }
        else if(A[i]>='a' && A[i]<='z')
        {
            A[i] = A[i] -32;
        }
    }
    cout<<"String is --> "<<A;
    return 0;
}