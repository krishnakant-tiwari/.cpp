//check a given number is present in the power of 2 or not

#include<iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if(num < 0)
    {
        cout << "Not present in the power of 2";
        return 0;
    }

    while(num != 1)
    {
        if(num % 2 == 1)
        {
            cout << "Not present in the power of 2";
            return 0;
        }
        else 
        {
            num = num / 2;
        }
    }

    cout << "Present in the power of 2";

    // int divider = 2;

    // if(num == 1)
    // {
    //     cout << "Yes";
    //     return 0;
    // }

    // while(num > divider)
    // {
    //     if(num % divider == 0)
    //     {
    //         cout << "Yes";
    //         return 0;
    //     }
    //     divider = divider * 2;
    // }

    // cout << "No";
    
    return 0;
}