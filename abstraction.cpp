//Hiding the unused details from user or to show only important details to users and Data Abstraction avoids the code duplication, i.e., programmer does not have to undergo the same tasks every time to perform the similar operation. The main aim of the data abstraction is to reuse the code and the proper partitioning of the code across the classes.
//ex - mobile phone,man driving a car

#include <iostream>
using namespace std;

class Abstraction
{
	private:
		int a, b;
	public:
		void set(int x, int y)
		{
			a = x;
			b = y;
		}
		void display()
		{
			cout<<"a = " <<a << endl;
			cout<<"b = " << b << endl;
		}
};

int main()
{
	Abstraction obj;
	obj.set(10, 20);
	obj.display();
	return 0;
}
