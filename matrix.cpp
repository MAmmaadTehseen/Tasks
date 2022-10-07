#include<iostream>
using namespace std;
class Matrix
{
	int noOfRows;
	int noOfColumns;
	int **data;
	int *ptr;
	
public:
	Matrix(int noOfRows, int noOfColumns);// If noOfRows>0 and noOfColumns then assign it and allocate the rows in the heap. Otherwise assign 0 to all
	void displayData(); // Display all records present in data
	~Matrix(); //Deallocate the memory allocated by Matrix	
	Matrix(const Matrix & ref); // copy constructor

};
Matrix::Matrix(int nOfRows, int nOfColumns)
{
	if(nOfRows>0 and nOfColumns>0)
	{
		noOfColumns=nOfColumns;
		noOfRows=nOfRows;
		

		
	}
	else
	{
		noOfColumns=0;
		noOfRows=0;		
	}
	data=&ptr;
	ptr=new int[noOfColumns*noOfRows];	
}
void Matrix::displayData()
{
	
	for(int i=0;i<noOfRows;i++)
	{
		for(int j=0;j<noOfColumns;j++)
		{
		cout<<**data++<<"\t";
		
		}
	cout<<"\n ";
	}
}
Matrix::~Matrix()
{
	delete []data;
}
Matrix::Matrix(const Matrix& ref)
{
	
	noOfColumns=ref.noOfColumns;
	noOfRows=ref.noOfRows;
	data=&ptr;
	ptr=new int[noOfColumns*noOfRows];
	
	
}
int main()
{
	
	Matrix m(2,5);		
	m.displayData();
	Matrix m1(m);
	m1.displayData();
}

