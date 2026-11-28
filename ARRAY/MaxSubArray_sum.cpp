#include <iostream>
using namespace std;

void maxSubArray_Sum(int *arr, int n)
{
    int maxsum = INT_FAST8_MIN;

    for (int start = 0; start < n; start++)
    {
       
        for (int end = start; end < n; end++)
        {
            int  currSum = 0;
            for (int i = start; i <= end; i++)
            {
                currSum+= arr[i];
               
            }
            cout<<currSum<<", ";
            maxsum = max(maxsum, currSum);
        }
        cout << endl;
    }
    cout<<"maximum sum is : "<<maxsum;
}


int main()
{
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);

    maxSubArray_Sum(arr, n);

    return 0;
}
