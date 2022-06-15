//Friend Class  can access private and protected members of other class in which it is declared as friend.  

//simply friend function tells us that using another class we can access the private members of another class

/*Following are some important points about friend functions and classes: 
1) Friends should be used only for limited purpose. too many functions or external classes are declared as friends of a class with protected or private data, it lessens the value of encapsulation of separate classes in object-oriented programming.
2) Friendship is not mutual. If class A is a friend of B, then B doesn’t become a friend of A automatically.
3) Friendship is not inherited 
4) The concept of friends is not there in Java. */


#include<iostream>
using namespace std; 

class XYZ
{
    private:
        char ch='A';
        int num = 11;
    public:
        friend class ABC;//using friend  we can access the private members of class XYZ   or   class XYZ  is a friend of class ABC   or   declarying the object as friend
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