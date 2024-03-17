// program to check whether an element given by user is present or not in array

#include<iostream>
using namespace std;

int main()
{
    int size, num;

    cout << "Enter the size of array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of array:\n";

    for(int i=0; i<size; i++)
    {
        cout << "index[" << i+1 << "]:";
        cin >> arr[i];
    }

    cout << "Enter the number: ";
    cin >> num;

    for(int i=0; i<size; i++)
    {
        if(num == arr[i])
        {
            cout << num << " is present in the array";
            return 0;
        }
    }

    cout << num << " is not present in the array";


    return 0;
}