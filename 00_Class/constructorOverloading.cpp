//using more than one constructor for the same class but having different number of parameters is known as constructor overloading

#include<iostream>
using namespace std;

class maths
{
    int a;
    public:
    maths(int x, int y)
    {
        a = x + y;
        cout << "a + b = " << a << endl;
    }
    maths(int x, int y, int z)
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

    maths obj1(a, b), obj2(a, b, c);


    return 0;
}