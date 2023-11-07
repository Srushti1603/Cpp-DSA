#include <iostream>
using namespace std;

class Array
{
private:
    int A[10];
    int size, length;

public:
    Array(int arr[], int s, int len)
    {
        size = s;
        length = len;
        for (int i = 0; i < length; i++)
        {
            A[i] = arr[i];
        }
    }

    int MissingElement()
    {
        int sum = 0;
        int n = length;
        int s = n * (n + 1) / 2;
        int ans;

        for (int i = 0; i < length; i++)
        {
            sum = sum + A[i];
        }

        ans = s - sum;
        return ans;
    }
};

int main()
{
    int arr[] = {0, 1, 2, 4, 5, 6, 7};
    Array Arr(arr, 10, 7);

    cout << "Missing Element Is " << Arr.MissingElement() << endl;
}
