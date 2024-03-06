// *             *
// * *         * *
// * * *     * * *
// * * * * * * * *
// * * *     * * *
// * *         * *
// *             *

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
        //print *
        for(col=1; col<=row; col=col+1)
        {
            cout << "*" << " ";
        }

        //print space
        for(col=1; col<=2*n-2*row; col=col+1)
        {
            cout << "  ";
        }

        //print *
        for(col=1; col<=row; col=col+1)
        {
            cout << "*" << " ";
        }
       cout << endl;
    }
    
        // Second part
    
       for(row=n-1; row>=1; row=row-1)
       {
        //print *
        for(col=1; col<=row; col=col+1)
        {
            cout << "*" << " ";
        }

        //print space
        for(col=1; col<=2*n-2*row; col=col+1)
        {
            cout << "  ";
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