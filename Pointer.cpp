#include<iostream>
using namespace std;


int main(){
// print the address of a variable
// int a = 10;
// cout<<"the address of a :"<< &a <<"\n";



// pointer basic concept
// int a = 1;
// int *ptr = &a;

// int **pptr = &ptr;

// cout<<pptr<<" = "<<&ptr<<endl;


// what will ptr2 point to the following code
int x=5;
int y=10;
int *ptr1 = &x;
int *ptr2 = &y;
ptr2 = ptr1;


cout<<ptr2<<" = "<<ptr1<<" - "<<&x;


    return 0;
}