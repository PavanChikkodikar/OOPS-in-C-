
/*Syntax
class class_name
{
};*/

// use of creating class is:Class: A class in C++ is the building block that leads to Object-Oriented programming. It is a user-defined data type, which holds its own data members and member functions, which can be accessed and used by creating an instance of that class. A C++ class is like a blueprint for an object.

// use of creating object Declaring Objects: When a class is defined, only the specification for the object is defined; no memory or storage is allocated. To use the data and access functions defined in the class, you need to create objects.

#include<iostream>
using namespace std; 

class car
{
    char color[10];//by default it is a private cant be accessed outside of class
    public:
    int speed;

    public://can be accessed out side of the class
    void getdata(int distance, int fuel)//member function
    {
        cout<<"The car has covered "<< distance << " km and has consumed " << fuel <<"L fule\n";
    }

    void mileage(float distance, float fuel); //declared here 

    void carspeed()
    {
        cout<<"The car speed is" << speed <<"\n";
    }

} audi; //(method 2 for creating object )

void car :: mileage(float d, float f) //defined here
{
    float carmileage = d/f;
    cout<<"The car mileage is " << carmileage <<"\n";
}

int main ()
{
    car swift; //created swift object (class_name object_name) (method 1 for creating object )

    // swift.getdata(130, 7);      //object.function()
    // audi.getdata(150,25);
    // swift.mileage(130,7);

    swift.speed = 50;//now we can access the speed because above in declaration it is made as public .if it was private then we cant be access it
    swift.carspeed();

    return 0;
}