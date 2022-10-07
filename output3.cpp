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
class B
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
class C:public B,A
{
	public:
	C()
	{
		cout<<"\n Constructor of C";
	}
	~C()
	{
		cout<<"\n Destructor of C";
	}
};
int main()
{
	C c;
	return 0;
}

