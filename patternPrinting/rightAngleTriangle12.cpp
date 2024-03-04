//         A
//       A B
//     A B C
//   A B C D
// A B C D E 

#include<iostream>
using namespace std;

int main()
{

int row, col, n;
char name;

cout << "Enter number: ";
cin >> n;

for(row=1; row<=n; row=row+1)
{
    //print space
    for(col=1; col<=n-row; col=col+1)
    {
        cout << "  ";
    }

    //print character
    for(col=1; col<=row; col=col+1)
    {
          
        name = 'A' + col-1;
        cout << name << " ";
    }
    cout << endl;
}

    return 0;
}