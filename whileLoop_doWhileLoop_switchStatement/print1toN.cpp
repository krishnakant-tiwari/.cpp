//  1 2 3 4 5 ...........n

#include<iostream>
using namespace std;

int main()
{
    int n;
    int i;

    cout << "Enter n: ";
    cin >> n;

    i = 1;  //initialization of loop variable
    while(i<=n) // condition
    {
        cout << i << " "; // print
        i = i + 1;        // increment
    }
    

    return 0;
}