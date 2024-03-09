// implementation of switch statement

#include<iostream>
using namespace std;

int main()
{

    char ch;

    cout << "r, s, l, h" << endl;
    cout << "Enter a charcter :";
    cin >> ch;

    switch (ch)
    {
    case 'r' :
        cout << "Ram";
        break;
    
    case 's' :
        cout << "Seeta";
        break;

    case 'l' :
        cout << "Lakshman";
        break;

    case 'h' :
        cout << "Hanuman";
        break;

    default :
        cout << "wrong input!!!";
        break;
    }


    return 0;
}