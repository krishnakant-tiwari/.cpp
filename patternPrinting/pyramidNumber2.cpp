// * * * * * * * * *
//   * * * * * * *
//     * * * * *
//       * * *
//        * *
//         *

#include<iostream>
using namespace std;

int main()
{
    int row, col;
    int n;

    cout << "Enter n: ";
    cin >> n;

    for(row=n; row>=1; row=row-1)
    {
        //print space
        for(col=1; col<=n-row; col=col+1)
        {
            cout << "  ";
        }

        //print star
        for(col=1; col<=2*row-1; col=col+1)
        {
            cout << "*" << " ";
        }

        cout << endl;
    }


    return 0;
}