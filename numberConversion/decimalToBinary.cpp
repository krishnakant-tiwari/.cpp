// program to convert a decimal number into binary form of the number

#include<iostream>
using namespace std;

int main()
{
    int num;
    int rem, ans = 0, mul = 1;

    cout << "Enter a decimal number: ";
    cin >> num;

    while(num > 0)
    {
        rem = num % 2;
        num = num / 2;
        ans = rem * mul + ans;
        mul = mul * 10;
    }

    cout << "Binary form = " << ans;



    return 0;
}