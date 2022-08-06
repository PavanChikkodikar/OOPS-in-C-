
/* A destructor is automatically called when:
 The program finished execution.
OR
Destructors are usually used to deallocate memory and do other cleanup for a class object and its class members when the object is destroyed.
*/
#include<iostream>
using namespace std; // this is namespace

class HelloWorld
{
    public:
    //Contructor
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