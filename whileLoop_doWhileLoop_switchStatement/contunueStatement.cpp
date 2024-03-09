// implementation of continue statement it is used to skip the 1 iteration that is current interation

#include<iostream>
using namespace std;

int main()
{

    int n;
    int i;

    cout << "Enter n: ";
    cin >> n;

    for(i=1; i<=n; i=i+1)
    {
        if(i%4==0)          // skip the iteration if the statement is true
        continue;

        cout << i << " ";   // print if above condition is not true
    }

    return 0;
}