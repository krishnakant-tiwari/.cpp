// Constructor is a special type function in C++. The name of constructor funtion will be same as the name of Class. The speciality of the constructor is it automatic calls the constructor function when an object is created. Constructor has no return type. Constructor without any parameter is called as default constructor.

#include<iostream>
using namespace std;

class construct
{
    public:
    construct()
    {
        cout << "This is the defualt constructor";
    }
};

int main()
{

    construct object;

    return 0;
}