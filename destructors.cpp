/* C++ in Hindi - Destrcutured Constructor*/

/* When does the destructor get called?
A destructor is automatically called when:
1) The program finished execution.
2) When a scope (the { } parenthesis) containing local variable ends.
OR
Destructors are usually used to deallocate memory and do other cleanup for a class object and its class members when the object is destroyed. A destructor is called for a class object when that object passes out of scope or is explicitly deleted.
*/
#include<iostream>
using namespace std; // this is namespace

class HelloWorld{
    public:
    //Contructor
    HelloWorld(){
        cout<<"Contrctor is Called"<<endl;
    }
    //Destructor
    ~HelloWorld(){ //at last Destructor is called and terminate the program
        cout<<"Destructor is Called"<<endl;
    }
    //Member Function
    void display(){
        cout<<"Hello World from Member Function"<<endl;
    }
};

int main ()
{
    HelloWorld obj; //Object Created
    obj.display();
    return 0;
}