#include<iostream>
using namespace std;

int main()
{
    int num, digit = 0, ans = 0;

    cout << "Enter a number: ";
    cin >> num;

    while(num > 9)
    {
        int ans = 0;

        while(num != 0)
        {
            digit = num % 10;
            num = num / 10;
            ans = ans + digit; 
        }
        num = ans;
    }

    cout << "Addition of digits = " << num;
    
    return 0;
}