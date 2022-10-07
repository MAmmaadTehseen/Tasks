#include <iostream>
using namespace std;

class A
{
	public:
	A()
	{
		cout<<"\n Constructor of A";
	}
	~A()
	{
		cout<<"\n Destructor of A";
	}
};
class B:public A
{
	public:
	B()
	{
		cout<<"\n Constructor of B";
	}
	~B()
	{
		cout<<"\n Destructor of B";
	}
};

int main()
{
	B b;
	return 0;
}

