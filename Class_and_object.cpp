// C++ program to demonstrate function  
// declaration outside class 

  
#include <iostream> 
using namespace std; 

class Container 
{ 

    public: 

    string name; 
    int id; 

    // printname is not defined inside class definition 
    void printname(); 

    // printid is defined inside class definition 
    void printid() 

    { 

        cout <<"id is: "<<id; 

    } 
}; 

  
// Definition of printname using scope resolution operator :: 

void Container::printname() 
{ 

    cout <<"name is: "<<name;  
} 

int main() { 

      

    Container obj1; 

    obj1.name = "Ram"; 

    obj1.id=15; 

      

    // call printname() 

    obj1.printname(); 

    cout << endl; 

      

    // call printid() 

    obj1.printid(); 

    return 0; 
}
