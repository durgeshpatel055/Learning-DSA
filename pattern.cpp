#include <iostream>
using namespace std;

int main()
{
    // // printing numbers like 1 1 1 1
    //                          2 2 2 2
    //                          3 3 3 3
    //                          4 4 4 4

    //     int n = 4;
    // for(int i =1;  i<=n; i++){
    //     for(int j =1; j<=n; j++){
    //         cout<<i<<" ";
    //     }
    //     cout<<" "<<endl;
    // }

    // printing star pattern : *
    //                         * *
    //                         * * *
    //                         * * *  *

    // int n;
    // cout<<"enter n :";
    // cin>>n;

    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
    //         cout<<" * ";
    //     }
    //     cout<<endl;
    // }

    // // printing the pattern like : * * * *
    //                                * * *
    //                                * *
    //                                *

    // int n;
    // cout << "enter n :";
    // cin >> n;

    // for (int i = n; i >= 1; i--)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // printing pattern like    1
    //                          1 2
    //                          1 2 3
    //                          1 2 3 4

    // int n;
    // cout << "enter n :";
    // cin >> n;

    // for (int i = 1; i <= n; i++)
    // {

    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << j;
    //     }
    //     cout << endl;
    // }

    // print the hollow rectangle pattern

    // int n = 7;
    // // cout<<"enter n : ";
    // // cin>>n;

    // for(int i=1; i<=n; i++){
    //     cout<<"*";
    //         for(int j=1; j<=n-1; j++){
    //             if(i==1 || i==n){
    //                 cout<<"*";
    //             }else{
    //                 cout<<" ";
    //             }
    //         }

    //     cout<<"* "<<endl;

    // }

    // printing the pattern      *
    //                         * *
    //                       * * *
    //                     * * * *

    // int n =4;

    // for(int i=1; i<=n; i++){
    //     // spaces
    //     for(int j=1; j<=n-i; j++){
    //        cout<<" ";
    //     }
    //     // stars
    //      for(int j=1; j<=i; j++){
    //        cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // print the floyd's triangle

    // int n = 1000;
    // int num =1;

    // for(int i=1; i<=n; i++){

    //     for(int j=1; j<=i; j++){

    //         cout<<num<<" ";
    //         num++;
    //     }
    //     cout<<endl;
    // }

    // print the diamond pattern

    //     int n = 80;
    // // upper half star
    //     for (int i = 1; i <= n; i++)
    //     {    //spaces
    //         for (int j = 1; j <= n-i; j++)
    //         {
    //             cout << " ";
    //         }
    //         //stars
    //        for (int j = 1; j <= (2*i-1); j++)
    //         {
    //             cout << "*";
    //         }
    //         cout << endl;
    //     }
    // // lower half star
    //     for (int i = n; i >= 1; i--)
    //     {    //spaces
    //         for (int j = 1; j <= n-i; j++)
    //         {
    //             cout << " ";
    //         }
    //         //stars
    //        for (int j = 1; j <= (2*i-1); j++)
    //         {
    //             cout << "*";
    //         }
    //         cout << endl;
    //     }

    // print the butterfly pattern

    int n = 4;
    // upper halp 
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= 2 * (n-i); j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // lower half
     for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= 2 * (n-i); j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}