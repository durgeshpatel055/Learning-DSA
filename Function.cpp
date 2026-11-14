#include <iostream>
using namespace std;

// write a function to print "hello world"!
// void printhello()
// {
//     cout << "hello world!";
// }

// write a function to print sum of two numbers

// int sum(int a, int b){
//    int sum = a + b;
//     return sum;
// }

// int main()
// {
//    int s = sum(2, 47);
//    cout<<"sum = "<<s;

//     return 0;
// }

// write a function to find product of two numbers

// int product(int a, int b)
// {
//     int product = (a * b);
//     return product;
// }

// int main()
// {
//     int p = product(6, 5);
//     cout << "product is : " << p;
//     cout << endl;

//     return 0;
// }

// write a function to check odd and even
// int isoddeven(int a)
// {
//     if (a % 2 == 0)
//     {
//         cout << a << "  is even";
//     }
//     else
//     {
//         cout << a << "  is odd";
//     }
// }

// int main()
// {

//     isoddeven(350);

//     return 0;
// }

// write a funtion to print factorial of a number
// int fact(int a){
// int count = 1;
// for(int i=1; i<=a; i++){
//     // cout<<i<<endl;
//     count = count*i;
// }

// cout<<"factorial of"<<a <<"is : "<<count;
// }

// int main(){

// fact(5);

//     return 0;
// }

// write a function to check a number is prime or not

// int checkPrime(int n)
// {

//     for (int i = 2; i <= n - 1; i++)
//     {
//         if (n % i == 0)
//         {
//             cout << "Not prime";
//         }
//     }
//     cout<<"Prime !";
// }

// int main()
// {
//     checkPrime(9);
//     return 0;
// }

// write a function to solve binomial coeffient

// int fact(int n)
// {
//     int fact = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         fact = fact * i;
//     }
//     return fact;
// }

// int binomial(int n, int r)
// {
//     int value1 = fact(n);
//     int value2 = fact(r);
//     int value3 = fact(n - r);

//     int result = value1 / (value2 * value3);
//     return result;
// }

// int main()
// {

//     cout << binomial(8, 2);

//     return 0;
// }

// print all prime numbers in range 2 to n

bool isPrime(int n)
{
    // check prime or not
    if (n == 1)
    {
        return false;
    }
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void AllPrime(int n)
{
    // print prime number from 2 to n
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
}

int main()
{

    AllPrime(23);

    return 0;
}
