/* A destructor is automatically called when the program finished execution.
OR
Destructors are usually used to deallocate the memory created by the constructor. and it will do other cleanup for a class object 
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