// check whether a given number is pallindrome or not

#include<iostream>
using namespace std;

int main()
{
    int num, rem, ans=0, holdNum;

    cout << "Enter a number: ";
    cin >> num;

    holdNum = num;

    while(num)
    {
        rem = num % 10;
        num = num / 10;
        ans = ans * 10 + rem;
    }

    if(ans == holdNum)
    {
        cout << "Pallindrome number";
        return 0;
    }

    cout << "Not a pallindrome number";

    return 0;
}