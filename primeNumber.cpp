// find a number is prime or not given by the user

#include<iostream>
using namespace std;

int main()
{

    int num, i;

    cout << "Enter a number: ";
    cin >> num;

    if(num < 2)                        // numbers which are less than 2 can not be a prime number
    {
        cout << "Not a Prime Number!";
        return 0;                      // return 0 end the program if not a prime number
    }
    else
    {
        for(i=2; i<num; i++)
        {
            if(num % i == 0)                    // if the number is divisible from any number between 1 and itself then it can not be a Prime number
            {
                cout << "Not a Prime Number!";
                return 0;                      // return 0 end the program  if not a prime number
            }
        }

        cout << "Prime Number!";               // print prime number
    }

    return 0;
}