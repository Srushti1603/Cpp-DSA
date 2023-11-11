//Counting Number Of Vowels And Consonents -->

#include<iostream>
using namespace std;

int main()
{
    char A[] = "How are you";
    int i;
    int vcount = 0;
    int ccount = 0;

    for(i=0;A[i]!='\0';i++)
    {
        if(A[i]=='a'|| A[i]=='e'|| A[i]=='i'|| A[i]=='o'|| A[i]=='u'|| A[i]=='A'|| A[i]=='E'|| A[i]=='I'|| A[i]=='O'|| A[i]=='U')
        {
           vcount++;
        }
        else if((A[i]>='a' && A[i]<='z') || (A[i]>='A' && A[i]<='Z'))
        {
            ccount++;
        }
    }
    cout<<"Number Of Vowels In String are "<<vcount<<endl;
    cout<<"Number Of Conconents In String are "<<ccount<<endl;
    return 0;
}