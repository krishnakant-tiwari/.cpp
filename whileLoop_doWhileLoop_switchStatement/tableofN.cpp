// printing table of the given number using while loop

#include<iostream>
using namespace std;

int main()
{

    int n;
    int i;

    // Taking input from user
    cout << "Enter n: ";
    cin >> n;

    i = 1; 
    while(i<=10)
    {
        //printing table of the entered number
        cout << n << " * " << i << " = " << n * i << endl;
        i = i + 1;
    }

    return 0;
}