// a b c d e
// a b c d e
// a b c d e
// a b c d e
// a b c d e

#include<iostream>
using namespace std;

int main()
{

    int row, col;
    char name;

    for(row=1; row<=5; row=row+1)
    {
        for(col=1; col<=5; col=col+1)
        {
            name = 'a' + (col - 1);
            {
                cout << name << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

                            //   Another way 

// #include <iostream>
// using namespace std;

// int main()
// {

//     int row;
//     char col;

//     for (row = 1; row <= 5; row = row + 1)
//     {
//         for (col = 'a'; col <= 'e'; col = col + 1)
//         {
//             cout << col << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }