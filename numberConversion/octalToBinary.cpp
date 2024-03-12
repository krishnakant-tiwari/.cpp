// convert octal number to decimal number

#include<iostream>
using namespace std;

int main()
{
    int num;
    int rem, ans = 0, mul = 1;

    cout << "Enter the Octal number : ";
    cin >> num;

    while(num > 0)
    {
        rem = num % 10;
        num = num / 10;
        ans = rem * mul + ans;
        mul = mul * 8; 
    }

// program to convert a decimal number into binary form of the number

    num = ans;                  //declaring number variable to take decimal input from user
    ans = 0, mul = 1;// answer and multiply variable initializing ans with 0 and mul with 1

    while(num > 0)    // loop break condition
    {
        rem = num & 1;            // extracting remainder
        //rem = num % 2;         // or extracting remainder
        num = num >> 1;      // extracting new number 
        //num /= 2;         // or extracting new number 
        ans += rem * mul; // extract current answer
        mul *= 10;        // incrementing mul * 10 for every iteration
    }

    cout << "Binary form = " << ans;      //printing binary form of the given decimal number

    return 0;
}