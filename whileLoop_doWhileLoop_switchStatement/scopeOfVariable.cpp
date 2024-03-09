// in a sigle block {} a variable can not be declared of same data type and same name

#include<iostream>
using namespace std;

int main()
{

    int i = 10;        // declared and assigned in outer block
    cout << i << endl;

    {
        int i = 20;    // declared and assigned in another block
        cout << i << endl;
    }

    cout << i << endl;

    for(int i=30; i<=40; i=i+1)    // declared and assigned in another block
    {
        cout << i << " ";
    }


    return 0;
}