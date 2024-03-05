//        1
//      1 2 1
//    1 2 3 2 1
//  1 2 3 4 3 2 1
//1 2 3 4 5 4 3 2 1

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
            cout << "  ";
        }

        //print number from 1 to row in increasing order
        for(col=1; col<=row; col=col+1)
        {
            cout << col << " ";
        }

        //print number from row-1 to 1 in decreasing order
        for(col=row-1; col>=1; col=col-1)
        {
            cout << col << " ";
        }
        cout << endl;
    }

    return 0;
}