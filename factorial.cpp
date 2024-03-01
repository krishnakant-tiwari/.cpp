// program to find the factorial of the number given by user 

#include<iostream>            
using namespace std;

int factorial(int x);

int factorial(int x)
{
    int i, result = 1;

    for(i=1; i<=x; i++)
    {
        result = result * i;
    }

    return (result);
}

int main()
{

    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Factorial = " << factorial(num);

    return 0;
}