// Polymorphism is a feature of OOPs that allows the object to behave differently in different conditions. 
//function has same name but parameters are different 
// 1) Compile time Polymorphism – This is also known as static binding or function overloading

#include<iostream>
using namespace std; 

class Add
{
    public:
        int sum(int num1, int num2)
        { 
            return num1+num2;
        }
        int sum(int num1, int num2, int num3)//function overloading
        { 
            return num1+num2+num3;
        }
};

int main ()
{
    Add obj;

    cout<<"Output: "<<obj.sum(10,20)<<endl;
    cout<<"Output: "<<obj.sum(10,20,30)<<endl;

    return 0;
}
