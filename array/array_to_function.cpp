#include<iostream>
using namespace std;

void print(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[5] = {3, 5, 3, 2, 6};

    print(arr, 5);

    return 0;
}