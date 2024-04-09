#include<iostream>
using namespace std;

class swapping
{
    public:
    void swap(int num1, int num2)
    {
        int temp = num1;
        num1 = num2;
        num2 = temp;
        cout << "After swap" << endl << "num1 = " << num1 << endl << "num2 = " << num2;
    }
};

int main()
{
    swapping *obj = new swapping();
    int num1, num2;
    cout << "Enter number : ";
    cin >> num1;
    cout << "Enter number : ";
    cin >> num2;
    obj->swap(num1, num2);
    delete obj;

    return 0;
}