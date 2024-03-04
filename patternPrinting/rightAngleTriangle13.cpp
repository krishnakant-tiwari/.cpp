//         5
//       5 4
//     5 4 3
//   5 4 3 2 
// 5 4 3 2 1

#include<iostream>
using namespace std;

int main()
{

    int row, col, n;

    cout << "Enter number: ";
    cin >> n;

    for(row=1; row<=n; row=row+1)
    {
        // print space
        for(col=1; col<=n-row; col=col+1)
        {
            cout << "  ";
        }

        // print number
        for(col=1; col<=row; col=col+1)
        {
            cout << n-(col-1) << " ";
        }
        cout << endl;
    }

    return 0;
}