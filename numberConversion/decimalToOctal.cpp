// converting a decimal number to octal form of the number

#include<iostream>
using namespace std;

int main()
{
    int num;                    //declaring number variable to take decimal input from user
    int ans = 0, mul = 1, rem;  // declaring remainder, answer and multiply variable initializing ans with 0 and mul with 1

    cout << "Enter a decimal number: ";   //Taking input from the user
    cin >> num;

    while(num > 0)
    {
        rem = num % 8;          // extracting remainder
        num = num / 8;          // extracting new number
        ans = rem * mul + ans;  // extract current answer
        mul = mul * 10;         // incrementing mul * 10 for every iteration
    }

    cout << "Octal Number = " << ans;    //printing octal form of the given decimal number


    return 0;
}