//constructor is a function which as same  name as that of class name and Constructor does not have a return value
// Types of constructors(3 types) -  Default, Parameterized, Copy constructor

#include<iostream>
using namespace std; 

class constructorDemo
{
    public://it should be public because we can access it outside the class,else we cant access outside
        constructorDemo()//it is a default constructor because there is no parameters
        {
            cout<<"This is from a Constructor";
        }
};

int main ()
{
    constructorDemo obj;  //if we only create object of constructor then constructor will be called ,there is no need of function ,in main() directly object will call the constructor
    
    return 0;
}