//2) Runtime Polymorphism – This is also known as dynamic binding or Function Overriding.

#include<iostream>
using namespace std; 

class A
{
    public:
        void display()
        {
            cout<<"This is Super/Parent Class Function"<<endl;
        }
};

class B : public A
{
    public:
        void display()//function overriding
        {
            cout<<"This is Base/Child Class Function";
        }
};

int main ()
{
    A obj;//parent class object
    obj.display();

    B obj2;//child class object
    obj2.display();
    return 0;
}