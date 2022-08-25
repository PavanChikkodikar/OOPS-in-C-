
/*Inheritance(sharing or resuing) - one class derives from another class or child class will inherit all properties from parent class 

/* Single Inheritance ---> B inherits A */

#include<iostream>
using namespace std; 

class Teacher
{
    public:
    Teacher()
    {
        cout<<"Hey, I'm a Teacher"<<endl;
    }

    string collegeName = "KLS GIT";
};

class MathTeacher: public Teacher
{//here we are inheriting the properties of Teacher to mathTeacher
    public:
    MathTeacher()
    {
        cout<<"I'm a math teacher"<<endl;
    }
};


int main ()
{
    MathTeacher obj;
    cout<<"College Name is: "<<obj.collegeName<<endl;//we can also access member variables from parent class or we can also access it using child class object
    return 0;
}