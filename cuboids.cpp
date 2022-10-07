#include<iostream>
#include<fstream>
using namespace std;
class cuboids
{
	float x,y,z;
	public:
	cuboids()//default constructor
	{
		x=1;
		y=1;
		z=1;
	}
	cuboids(float a,float b,float c)//parametreized constructor
	{
		x=a;
		y=b;
		z=c;
	}
	void setx(float a)//setter of x
	{
		if(a>0 and a<35)
		{
		x=a;
		}
	}
	void sety(float a)//setter of y
	{
		if(a>0 && a<35)
		{
		y=a;
		}
	}
	void setz(float a)//setter of z
	{
		if(a>0 && a<35)
		{
		z=a;
		}
	}
	void input()//input funtion to take input for a object
	{
		float a,b,c;
		cout<<"x=";
		cin>>a;
		cout<<"y=";
		cin>>b;
		cout<<"z=";
		cin>>c;
		if(a>0 && a<35 && b>0 && b<35 && c>0 && c<35)
		{
			x=a;
			y=b;
			z=c;
		}
		else
		{
			x=1;
			y=1;
			z=1;
		}
		
	}
	void operator ==(cuboids t)
	{
		t.x=x;
		t.y=y;
		t.z=z;
	}
	friend ostream &operator <<(ostream &out,cuboids t)
	{
		
		out<<"x="<<t.x;
		out<<"\ny="<<t.y;
		out<<"\nz="<<t.z;
	}
	cuboids operator +(cuboids t)
	{
		cuboids t2;
		t2.x=t.x+x;
		t2.y=t.y+y;
		t2.z=t.z+z;
	return t2;
	}
	
};
void write2file()
{
	ofstream file("cub.txt");
	cuboids c[10];
	
	for(int i=0;i<1;i++)
	{
		c[i].input();
		file.write((char*) &c[i],sizeof(c[i]));
	}
	cout<<c[0];
}
int main()
{
	cuboids c;
	cuboids c2(2,2,2);
	cuboids c1(3,3,3);
	c=c1+c2;
	cout<<c;
	
	write2file();
}
