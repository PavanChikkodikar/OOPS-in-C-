//C inherits both A and B 

#include<iostream>
using namespace std;

class A
{
    public:
    A()
    {
        cout<<"Constructor of A"<<endl;
    }
};
class B 
{
    public:
    B()
    {
        cout<<"Constructor of B"<<endl;
    }
    string a="Pavan";
};

class C : public A, public B
{//one child has multiple parents
    public:
    C()
    {
        cout<<"Constructor of C"<<endl;
    }
};

int main ()
{
    C obj;
    cout<<obj.a<<endl;
    return 0;
}