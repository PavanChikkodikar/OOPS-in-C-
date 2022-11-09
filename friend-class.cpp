//Friend Class can access private and protected members of other class in which it is declared as friend.  

//simply friend function tells us that using another class we can access both private members and protected members of another class

// If class A is a friend of B, then B doesn’t become a friend of A automatically.
// Friendship is not inherited 
// The concept of friends is not there in Java. 


#include<iostream>
using namespace std; 

class XYZ
{
    private:
        char ch='A';
        int num = 11;
    public:
        friend class ABC;//class XYZ  is a friend of class ABC 
};

class ABC 
{
    public:
    void disp(XYZ obj)//passing object as a parameter
    {
        cout<<obj.ch<<endl;
        cout<<obj.num<<endl;
    }
};

int main ()
{
    ABC obj;
    XYZ obj2;
    obj.disp(obj2);
    return 0;
}