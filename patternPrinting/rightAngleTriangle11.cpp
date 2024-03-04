//         1
//       1 2
//     1 2 3
//   1 2 3 4
// 1 2 3 4 5

#include<iostream>
using namespace std;

int main()
{

int row, col, n;

cout << "Enter number: ";
cin >> n;

for(row=1; row<=n; row=row+1)
{
    //print space
    for(col=1; col<=n-row; col=col+1)
    {
        cout << "  ";
    }

    //print number
    for(col=1; col<=row; col=col+1)
    {
        cout << col << " ";
    }
    cout << endl;
}

    return 0;
}