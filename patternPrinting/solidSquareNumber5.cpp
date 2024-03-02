// a a a a a
// b b b b b 
// c c c c c 
// d d d d d 
// e e e e e 

#include<iostream>
using namespace std;

int main()
{

    int row, col;
    char name;

    for(row=1; row<=5; row=row+1)
    {
        name = 'a' + (row-1);
        {
            for(col=1; col<=5; col=col+1)
            {
                cout << name << " ";
            }
            cout << endl;
        }
    }

    return 0;
}


                                // Aother way 


// #include<iostream>
// using namespace std;

// int main()
// {
    
//     char row, col;

//     for(row='a'; row<='e'; row=row+1)
//     {
//         for(col='a'; col<='e'; col=col+1)
//         {
//             cout << row << " ";
//         }
//         cout << endl;
//     }


//     return 0;
// }