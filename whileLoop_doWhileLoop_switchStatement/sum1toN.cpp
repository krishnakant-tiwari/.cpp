//calculating sum of numbers from 1 to n entered by user using do while loop

#include<iostream>
using namespace std;

int main()
{

    int n;
    int i;
    int sum = 0; // initializing sum variable with zero

    cout << "Enter n: ";
    cin >> n;

    i = 1;
    do{
        sum = sum + i;          // calculating sum 
        i = i + 1;              //incrementing loop variable
    }while(i<=n);

    cout << "Sum = " << sum;


    return 0;
}