#include<iostream>
using namespace std;

class multi
{
    public:
    void multiplication(int num1, int num2)
    {
        int multiplication = num1 * num2;
        cout << "Multiplication = " << multiplication;
    }
};

int main()
{
    multi *obj = new multi();  // allocate memory using new, call default constructor of class, assign address to obj pointer
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    obj -> multiplication(num1, num2);   // call by object 

    delete obj;   // free memory 

    return 0;
}