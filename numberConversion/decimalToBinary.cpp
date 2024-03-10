// program to convert a decimal number into binary form of the number

#include<iostream>
using namespace std;

int main()
{
    int num;                  //declaring number variable to take decimal input from user
    int rem, ans = 0, mul = 1;// declaring remainder, answer and multiply variable initializing ans with 0 and mul with 1

    cout << "Enter a decimal number: "; //Taking input from the user
    cin >> num;

    while(num > 0)    // loop break condition
    {
        rem = num & 1;            // extracting remainder
        //rem = num % 2;         // or extracting remainder
        
        num /= 2;         // extracting new number 
        ans += rem * mul; // extract current answer
        mul *= 10;        // incrementing mul * 10 for every iteration
    }

    cout << "Binary form = " << ans;      //printing binary form of the given decimal number



    return 0;
}