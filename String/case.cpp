//Changing Case Of String -->
//AScii code A-65, a-97

#include<iostream>
using namespace std;

int main()
{
    char A[] = "WELCOME";
    int i;
    for(i=0;A[i]!='\0';i++)
    {
        A[i] = A[i] + 32;
        //Since ascii code for a and A has difference of 32
    }
    cout<<"String is --> "<<A;
    return 0;
}