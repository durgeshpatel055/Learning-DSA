#include<iostream>
using namespace std;


int main(){

   int a = 10;
   int *ptr = &a;

//  initial address 
   cout<<ptr<<"\n";
    ptr++;

    // updated address +3
    cout<<ptr<<"\n";
    ptr--;

    // back initial address 
    cout<<ptr<<"\n";
    




    return 0;
}