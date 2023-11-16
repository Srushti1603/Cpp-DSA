//Validate a string (if it is alpha-numerical then valid), (else not valid)-->

#include<iostream>
using namespace std;

bool valid(char *name)
{
    int i;
    for(i=0;name[i]!='\0';i++)
    {
        if(!(name[i]>=65 && name[i]<=90) && !(name[i]>=97 && name[i]<='z') && !(name[i]>=48 && name[i]<=57))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    char A[] = "Ani321";
    char B[] = "!fruit=";
    
    cout<<A<<" --> ";
    if(valid(A)==false)
    {
        cout<<"Invalid string!"<<endl;
    }
    else
    {
        cout<<"Valid string!"<<endl;
    }

    cout<<B<<" --> ";
    if(valid(B)==false)
    {
        cout<<"Invalid string!"<<endl;
    }
    else
    {
        cout<<"Valid string!"<<endl;
    }
    return 0;
}