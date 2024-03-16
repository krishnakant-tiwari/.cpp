// find compliiment of a given number when it is converted in binary form

#include<iostream>
using namespace std;

int main()
{
    int num, rem, ans = 0, mul = 1;

    cout << "Enter a number: ";
    cin >> num;

    while(num)
    {
        rem = num % 2;
        rem = rem ^ 1;
        num = num / 2;
        ans = ans + rem * mul;
        mul = mul * 2;
    }

    cout << "compliment = " << ans;


    return 0;
}