
//Class B and C inherits class A

#include<iostream>
using namespace std;

class A
{  //one parent has more than one child classes
    public:
    A()
    {
        cout<<"Constructor of A"<<endl;
    }
};
class B : public A
{
    public:
    B()
    {
        cout<<"Constructor of B"<<endl;
    }
};

class C : public A
{
    public:
    C()
    {
        cout<<"Constructor of C"<<endl;
    }
};

int main ()
{
    C obj;//here in child class C we can only access the parent class of A ,but not there sibling
    return 0;
}
