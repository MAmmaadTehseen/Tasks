using namespace std;
#include<iostream>

class safearay
{
private:
	int arr[20];
public:
	int& operator [](int n)    //note: return by reference
	{			
			if( n< 0 || n>=20)
			{ 
				cout << "\nIndex out of bounds"; 
				exit(1);
			}
			return arr[n];
	}
};
////////////////////////////////////////////////////////////////
int main()
{
	safearay sa1;
	for(int j=0; j<20; j++) //insert elements
		sa1[j] = j*10; //*left* side of equal sign
		
		
		
	for(int j=0; j<20; j++) //display elements
	{
		int temp = sa1[j]; //*right* side of equal sign
		cout << "Element " << j << " is " << temp << endl;
	}
	
	cout<<"\n --Here--"<<sa1[111];
	
return 0;
}
