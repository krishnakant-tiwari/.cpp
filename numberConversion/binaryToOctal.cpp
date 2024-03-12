//converting binary number to decimal number

#include<iostream>
using namespace std;

int main()
{
    int num;
    int rem, ans = 0, mul = 1;

    cout << "Enter the binary number : ";
    cin >> num;

    while(num > 0)
    {
        rem = num % 10;
        num = num / 10;
        ans = rem * mul + ans;
        mul = mul * 2; 
    }

    // converting a decimal number to octal form of the number
    
    num = ans;
    ans = 0;
    mul = 1;

    while(num > 0)
    {
        rem = num % 8;          // extracting remainder
        num /= 8;          // extracting new number
        ans += rem * mul;  // extract current answer
        mul *= 10;         // incrementing mul * 10 for every iteration
    }

    cout << "Octal Number = " << ans;    //printing octal form of the given decimal number


    return 0;
}