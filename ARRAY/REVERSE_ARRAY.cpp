#include <iostream>
using namespace std;

// int reverse_arr(int *arr, int n)
// {
//     for (int i = n-1; i >= 0; i--)
//     {
//         cout << arr[i] << " ";
//     }
// }

// int main()
// {
//     // reverse an array

//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr) / sizeof(int);

//     reverse_arr(arr, n);

int reverse_arr(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
}

int main()
{
    // reverse an array

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);

    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    reverse_arr(arr, n);

    return 0;
}