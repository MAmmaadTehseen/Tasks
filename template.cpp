#include<iostream>
using namespace std;
template <class t>
t average(t arr[],int size)
{
	t average;
	for(int i=0;i<size;i++)
	{
		average+=arr[i];
	}
	average=average/size;
	return average;
}
int main()
{
	double arr[3]={10,20,30};
	cout<<average(arr,3);
	
	
	
}

