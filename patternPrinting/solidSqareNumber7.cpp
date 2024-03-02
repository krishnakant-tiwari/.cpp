// 1 2 3 4 5
// 6 7 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20
// 21 22 23 24 25  

#include<iostream>
using namespace std;

int main()
{

    int row, col;

    for(row=1; row<=5; row=row+1)
    {
        for(col=1; col<=5; col=col+1)
        {
            cout << (row-1)*5 + col << " ";
        }
        cout << endl;
    }

    return 0;
}

                                // Another way 
            
// #include<iostream>
// using namespace std;

// int main()
// {
    
//     int row, col;
//     int num = 1;

//     for(row=1; row<=5; row=row+1)
//     {
//         for(col=1; col<=5; col=col+1)
//         {
//             cout << num << " ";
//             num = num + 1;
//         }
//         cout << endl;
//     }

//     return 0;
// }