// find a missing number in an array

#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 6};
    int i;

    for(i=0; i<5; i++)
    {
        if(arr[i] != i+1)
        {
            cout << "Missing element is " << i+1;
            return 0;
        }
    }
}