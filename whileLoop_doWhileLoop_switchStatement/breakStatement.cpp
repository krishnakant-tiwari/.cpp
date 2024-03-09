//implementaion of break statement

#include<iostream>
using namespace std;

int main()
{

    int n;
    int i;

    cout << "Enter n:";
    cin >> n;

    i = 1;
    do{
        if(i == 5)
        {
            break;           // exit from the loop
        }

        cout << i << endl;   // print statement
        i = i + 1;           // increment loop variable
    }while(i<=n);


    return 0;
}