#include<iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    int arr[size];
    cout << "Enter elements of array:\n";
    for(int i=0; i<size; i++)
    {
        printf("index[%d] : ", i+1);
        scanf("%d", &arr[i]);
    }

    int start = 0, end = size - 1;

    while(start < end)         // break codition
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    cout << "Reversed elements of array:\n";
    for(int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}