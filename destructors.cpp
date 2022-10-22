/* A destructor is automatically called when the program finished execution.
OR
Destructors are usually used to deallocate memory created by the constructor. and do other cleanup for a class object and its class members when the object is destroyed.
*/

#include<iostream>
using namespace std; 

class HelloWorld
{
    public:
    //default Contructor
    HelloWorld()
    {
        cout<<"Contrctor is Called"<<endl;
    }
    //Destructor
    ~HelloWorld()
    { //at last Destructor is called and terminate the program
        cout<<"Destructor is Called"<<endl;
    }
    //Member Function
    void display()
    {
        cout<<"Hello World from Member Function"<<endl;
    }
};

int main ()
{
    HelloWorld obj; //Object Created
    obj.display();
    return 0;
}