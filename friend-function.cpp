//this function can access the private and protected members of another function

//in friend class we have done class as friend but in friend function we have done function as friend

#include <iostream>
using namespace std;

class XYZ 
{
private:
   int num=100;
   char ch='Z';
public:
   friend void disp(XYZ obj);//declarying the function as friend
};
//Global Function
void disp(XYZ obj)
{
   cout<<obj.num<<endl; 
   cout<<obj.ch<<endl;
}

int main() 
{
   XYZ obj;
   disp(obj);
   return 0;
}