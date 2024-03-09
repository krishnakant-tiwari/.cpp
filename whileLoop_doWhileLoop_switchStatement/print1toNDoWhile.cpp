//printing 1 to N by using do while loop

#include<iostream>
using namespace std;

int main()
{

    int n;
    int i; // loop variable

    cout << "Enter n: ";
    cin >> n;

    i = 1;                     //initinalization
    do{
        cout << i << endl;     //print number
        i = i + 1;             //increment
    }while(i<=n);


    return 0;
}