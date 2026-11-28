#include <iostream>
using namespace std;

int linear(int *arr, int n, int key)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "Element if found at index : " << i;
        }
        
    }

    return -1;
}


int main()
{

    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int n = sizeof(arr) / sizeof(int);
    int key = 2;

    linear(arr, n, key);

    return 0;
}
