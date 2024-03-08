//using more than one constructor for the same class but having different number of parameters is known as constructor overloading

#include<iostream>
using namespace std;

class maths
{
    int a;
    public:
    maths(int x, int y)            // constructor with 2 parameters
    {
        a = x + y;
        cout << "a + b = " << a << endl;
    }
    maths(int x, int y, int z)     // constructor with 3 parameters
    {
        a = x * y * z;
        cout << "a * b * c = " << a << endl;
    }

};

int main()
{

    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    maths obj1(a, b), obj2(a, b, c);     // creating objects


    return 0;
}