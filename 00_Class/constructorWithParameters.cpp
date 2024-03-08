//The constructor which have one or more parameters or arguments is called as Constructor with Parameters.

#include<iostream>
using namespace std;

class sum
{
    public:
    sum(int x, int y) // constructor with parameters
    {
        cout << "a + b = " << x + y;
    }
};

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    sum obj1(a, b); // constructor with parameters
}