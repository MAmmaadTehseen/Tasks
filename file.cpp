#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	string line;
	ifstream file("file.cpp");
	while(!file.eof())
	{
	getline(file,line);
	
	cout<<line<<endl;
	
	//ammad tehseen 
	}
}
