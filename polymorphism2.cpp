 /* Polymorphism Part- 2 (Function Overriding)*/
 //2) Runtime Polymorphism – This is also known as dynamic (or late) binding.
//in this there are same function display() but the only difference is it has been used in different classes this is called Function Overriding 
//OR
//child class has same function name as that of parent and no arguments 
#include<iostream>
using namespace std; 

class A{
    public:
        void display(){
            cout<<"This is Super/Parent Class Function"<<endl;
        }
};

class B : public A{//inheriting
    public:
        void display(){
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