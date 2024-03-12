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

    cout << "Decimal form = " << ans;
    
    return 0;
}