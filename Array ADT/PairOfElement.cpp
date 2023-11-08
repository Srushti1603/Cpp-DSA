#include<iostream>
using namespace std;
    
class Array{
    private:
        int *A;
        int size;
        int length;

    public:
        Array(int A[],int s,int l)
        {
            size=s;
            length=l;
            A = new int[size];
        }   

        void PairOfElement(int A[])
        {
            for(int i=0;i<length-1;i++)
            {
                for(int j=i+1;j<length;j++)
                {
                    if(A[i]+A[j]==10)
                    {
                        cout<<A[i]<<" and "<<A[j]<<endl;
                        break;
                    }
                }
            }
        }

        ~Array()
        {
            delete []A;
        }
};

int main()
{
    int A[] = {6,3,8,4,7,1,9,14,10};
    Array arr(A,10,9);
    arr.PairOfElement(A);
    return 0;
}