#include<iostream>
using namespace std;

class simple
{
    public:
    void simple_interest(int principle, int rate, int time)
    {
        float simple_interest = (principle * rate * time) / 100;
        cout << "Simpel Interest = " << simple_interest;
    }
};

int main()
{
    cout << "Program to calculate simple interest by using new and delete" << endl;
    simple *obj = new simple(); // default constructor address assigned to pointer *obj
    int principle, rate, time; // declare variables
    cout << "Enter principle: "; // input from user
    cin >> principle;
    cout << "Enter rate: ";
    cin >> rate;
    cout << "Enter time: ";
    cin >> time;
    obj -> simple_interest(principle, rate, time);  // fuction call by object

    delete obj;   // free memory     

    return 0;
}