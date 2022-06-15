/* Virtual Function --->here we can control the code. i can tell what function to call and what not to call*/
// Virtual functions are used to achieve runtime polymorphism.
#include<iostream>
using namespace std; 

class base
{
    public:
        virtual void print()
        {
            cout<<"I'm from base class"<<endl;
        }
        void show()
        {
            cout<<"I'm from base class"<<endl;
        }
};
class derived : public base
{
    public:
        void print()
        {
            cout<<"I'm from derived class"<<endl;
        }
        void show()
        {
            cout<<"I'm from derived class"<<endl;
        }
};

int main ()
{
    base* bptr;//base class pointer type of object
    derived d;
    bptr = &d;//address of d, we assigned it to bptr pointer object, so now bptr have address of derived class object OR address of derived class is assigned to object of base class

    bptr->print();//function calling derived class print function
    bptr->show();//function calling derived class print function
    return 0;
}
