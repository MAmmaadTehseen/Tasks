#include "fraction.h"
#include <iostream>
using namespace std;
class denominatornotzero
{
	public:
	char* what()
	{
		return "Divide by zero not allowed";
	}
 	
};



fraction::fraction(int n, int d)
{
	
	try
	{
		if(d==0)
			throw denominatornotzero();
	}
	catch(denominatornotzero& e)
	{
		cout<<e.what();
	}
	
       num = n;
       den = d;
    
}
fraction::~fraction()
{
}
int main()
{
fraction x; // 0/1
fraction y(2, 1); // y=2/ 0
fraction z(0, 0); // z=0/ 0
return 0;
}

