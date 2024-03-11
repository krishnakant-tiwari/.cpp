// program to find the factorial of the number given by user 

#include<iostream>            
using namespace std;

int factorial(int x);

//Defining function to calculate the factorial of the given number
int factorial(int x)
{
    int i, result = 1;

    // calculating factorial
    for(i=1; i<=x; i++)
    {
        result = result * i;
    }

    return (result); // returning result
}

int main()
{

    int num;

    cout << "Enter a number: ";
    cin >> num;

    //printing factorial by calling the function
    cout << "Factorial = " << factorial(num);

    return 0;
}