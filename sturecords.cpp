using namespace std;
#include<iostream>
#include<fstream>
struct Student
{
int stdId;
char name[20];
double gpa;
};
const int totalRecords = 100; //total number of records in the input file "std.dat"
void selectRecords (const int * list, const int listSize) // Implement this function
{
	Student s;
	for(int i=0;i<listSize;i++)
	{
	ifstream file("std.dat");
	int loc;
	loc=list[i]*32;
	--loc;
	file.seekg(loc);
	file.read((char*)&s,sizeof(s));
	ofstream file1("out.dat",ios::app);
	file1.write((char*)&s,sizeof(s));
	
}
	
}
int main()
{
	Student s;
	int listsize;
	
	int arr[4]={1,2,3,4};
	int *list;
	list=arr;
	listsize=sizeof(arr);
	selectRecords(list,listsize);
}
