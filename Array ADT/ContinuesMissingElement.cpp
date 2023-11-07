#include<iostream>
using namespace std;

class Array
{
    private:
        int A[10];
        int size;
        int length;
    public:
        Array(int A[],int s,int l)
        {
            size=s;
            length=l;
        }    

        int MissingElement(int A[]);
};

int Array::MissingElement(int A[])
{
    int l = A[0];
    int diff = l-0;
    int ele;
    for(int i=0;i<length;i++)
    {
        if(diff!=A[i]-i)
        {
            while(diff<A[i]-i)
            {
                ele = diff + i;
                cout<<ele<<endl;
                diff++;
            }
        }
    }

}

int main()
{
    int A[] = {11,12,13,15,16,19,20};
    Array arr(A,10,7);
    cout<<"Missing Elements --> "<<endl;
    arr.MissingElement(A);
    return 0;
}
