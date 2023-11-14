//Counting Words -->

#include<iostream>
using namespace std;

int main()
{
    char A[] = "My Name Is Srushti";
    int i;
    int words = 1;

    for(i=0;A[i]!='\0';i++)
    {
        if(A[i]==' ' && A[i-1]!=' ')
        {
            words ++;
        }
    }
    cout<<"Number Of Words In String are "<<words<<endl;
    return 0;
}