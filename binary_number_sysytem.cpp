#include<iostream>
using namespace std;


// write a program to convert binary to decimal
int BinTodec(int binNum){
int n = binNum;
int decimal = 0;
int pow = 1;


while(n > 0 ){
    int lastDig = n % 10;
    decimal = decimal + (lastDig * pow);
    pow = pow * 2;
    n = n/10;
}
cout<<decimal;

}


int main(){

    BinTodec(101);
    return 0;
}