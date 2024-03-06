//    *
//   * *
//  * * *
// * * * *
// * * * *
//  * * * 
//   * *
//    *
   
#include<iostream>
using namespace std;

int main()
{

    int row, col;
    int n;

    cout << "Enter n: ";
    cin >> n;

    for(row=1; row<=n; row=row+1)
    {   
        //print space
        for(col=1; col<=n-row; col=col+1)
        {
            cout << " ";
        }

        //print *
        for(col=1; col<=row; col=col+1)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }

    // printing in reverse order
    for(row=n; row>=1; row=row-1)
    {   
        //print space
        for(col=1; col<=n-row; col=col+1)
        {
            cout << " ";
        }

        //print *
        for(col=1; col<=row; col=col+1)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }

    return 0;
}