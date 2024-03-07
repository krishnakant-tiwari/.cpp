// printing table of the given number using while loop

#include<iostream>
using namespace std;

int main()
{

    int n;
    int i;

    cout << "Enter n: ";
    cin >> n;

    i = 1; 
    while(i<=10)
    {
        cout << n << " * " << i << " = " << n * i << endl;
        i = i + 1;
    }

    return 0;
}