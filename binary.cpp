#include<iostream>
using namespace std;
class binary
{
	int a,b;
	public:
		void seta(int x)
		{
			a=x;
		}
		
		void setb(int x)
		{
			b=x;
		}
		binary()
		{
			a=0;
			b=1;
		}
		binary(int x,int y)
		{
			a=x;
			b=y;
		}
		binary(binary& b)
		{
			a=b.a;
			b.b=b.b;
		}
		void getbinary()
		{
			cin>>a;
			cin>>b;
		}
		binary operator =(binary b)
		{
			binary t;
			t.a=a;
			t.b=this->b;
			return t;
		}
		friend ostream& operator<<(ostream &out,binary b)
		{
			out<<b.a;
			out<<b.b;
		}
		binary operator+(binary b)
		{
			binary temp;
			temp.a=b.a+a;
			temp.b=this->b+b.b;
			return temp;
		}
		bool operator !()
		{
			if(a>0 and b>0)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		static int getEqualindex(binary b[10])
		{
			for(int i=0;i<sizeof(b);i++)
			{
				if(b[i].a==b[i+1].a and b[i].b==b[i+1].b)
				{
					return i;
				}
				else 
				{
				}
				
			}
					return -1;
		}

};
int main()
{
	binary b[10];

	cout<<binary::getEqualindex(b);
	
}
