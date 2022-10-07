#include<iostream>
using namespace std;
class publication
{
	protected:
	string title;
	int price;
	public:
		virtual void showprice()
		{
			cout<<"The Price is:"<<price;
		}
		void getdata()
		{
			cout<<"Enter title:";
			getline(cin,title);
			cout<<"Enter price:";
			cin>>price;
		}
		void putdata()
		{
			cout<<"Title:"<<title<<endl;
			cout<<"Price:"<<price<<endl;
		}
		
};
class book:public publication
{
	int pn;
	public:
		void showprice()
		{
			cout<<"The Price is:"<<price;
		}
		void getdata()
		{
			cout<<"Enter title:";
			getline(cin,title);
			cout<<"Enter price:";
			cin>>price;
			cout<<"Enter pages";
			cin>>pn;
		}
		void putdata()
		{
			cout<<"Title:"<<title<<endl;
			cout<<"Price:"<<price<<endl;
			cout<<"Pages:"<<pn<<endl;
		}
};
class tape:public publication
{
	float pt;
	public:
		void showprice()
		{
			cout<<"The Price is:"<<price;
		}
		void getdata()
		{
			cin.ignore();
			cout<<"Enter title:";
			getline(cin,title);
			cout<<"Enter price:";
			cin>>price;
			cout<<"Enter playtime:";
			cin>>pt;
		}void putdata()
		{
			cout<<"Title:"<<title<<endl;
			cout<<"Price:"<<price<<endl;
			cout<<"Playtime:"<<pt;
		}
};
int main()
{
	book b,*bptr;
	tape t,*tptr;
	b.getdata();
	t.getdata();
	b.putdata();
	t.putdata();
	
}
