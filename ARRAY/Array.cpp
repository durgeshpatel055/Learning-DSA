#include <iostream>
using namespace std;

int main()
{
    // //   creating an array
    // int marks[50] = {1,2,3};
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;


   // input and output in an array

    // int marks[5] = {34, 56, 78, 16, 97};

    // int n = sizeof(marks) / sizeof(int);

    // // input 
    // for (int i = 0; i < n; i++)
    // {
    //     cin>> marks[i];
    // }

    // // output
    // for (int i = 0; i < n; i++)
    // {
    //     cout << marks[i] << " ";
    // }


// find the maximum in the array
// int arr[5] = {5,7654,385,98,2};
// int n = sizeof(arr)/sizeof(int);
// int max = arr[0];

// for(int i=0 ; i<n; i++){
//     if( arr[i] > max ){
//         max = arr[i];
//     }
// }
// cout<<"maximum element is "<<max;


// find the smallest value in an array

int arr[] = {2,4,5,1,8};
int n = sizeof(arr)/sizeof(int);
int min = arr[0];

for(int i=0; i<n; i++){
 if(arr[i]< min){
    min = arr[i];

 }

}
cout<<"the min is : "<<min;






    return 0;
}