// a b c d e
// a b c d e
// a b c d e
// a b c d e
// a b c d e

#include <iostream>
using namespace std;

int main()
{

    int row;
    char col;

    for (row = 1; row <= 5; row = row + 1)
    {
        for (col = 'a'; col <= 'e'; col = col + 1)
        {
            cout << col << " ";
        }
        cout << endl;
    }

    return 0;
}