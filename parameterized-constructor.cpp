// The constructor has arguments is called as a Parameterized Constructor or when it accepts a specific number of parameters

#include<iostream>
using namespace std;

class Add
{
    public:
    Add(int n1,int n2)//constructor has parameters
    {
        cout<<(n1+n2)<<endl;
    }
};
int main()
{
    Add obj(20,30);
    return 0;
}