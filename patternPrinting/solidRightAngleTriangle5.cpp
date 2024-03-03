// a 
// b b
// c c c 
// d d d d 
// e e e e e 

#include<iostream>
using namespace std;

int main()
{

    int row, col;
    char name;

    for(row=1; row<=5; row=row+1)
    {
        for(col=1; col<=row; col=col+1)
        {
            name = 'a' + (row-1);
            cout << name << " ";
        }
        cout << endl;
    }

    return 0;
}

//                            Another way

// #include<iostream>
// using namespace std;

// int main()
// {

//     int row, col;
//     char name = 'a';

//     for(row=1; row<=5; row=row+1)
//     {
//         for(col=1; col<=row; col=col+1)
//         {
//             cout << name << " ";
//         }
//         name = name + 1;
//         cout << endl;
//     }

//     return 0;
// }