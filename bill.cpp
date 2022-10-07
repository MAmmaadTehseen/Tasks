#include<iostream>
using namespace std;
class Item
{
	char name[100];	//name of the item
	double price;		//price of the item
    public:
    	void input()
    	{
    	cout<<"Enter item name:"<<endl;
		cin>>name;
		cout<<"Enter price:"<<endl;
		cin>>price;
    		
		}
	double getprice()
	{
		return price;
		}	


};
class Bill:public Item
{
	int id;			//Unique id for bill
	int itemCount;		//No. of items in the bill
	Item *list;		//Array containing the items which are part of the bill
	double billAmount;	//Total amount of the bill ( which is calculated as the sum of the 
				//prices of all items present on that bill
			
	public:
		void setbill(double b)
		{
			billAmount=b;
		}
		double getbill()
		{
			return billAmount;
		}

};
int main()
{
	void computeonebill(Bill *b);
void computeallbill(Bill *ptr,int numbills);

	cout<<"Enter no of bills:"<<endl;
	int numbill;
	cin>>numbill;
		
		Bill *bill; 
		bill=new Bill[numbill];
		computeallbill(bill,numbill);
		
		
}
void computeonebill(Bill *b)
{
	int count;
	double total=0;
	cout<<"Enter no of items in the bill:"<<endl;
	cin>>count;
	for(int i=0;i<count;i++)
	{
		b->input();
		total+=b->getprice();
	}
	b->setbill(total);
	cout<<"Total bill is ";
	cout<<total<<endl;
	
}

void computeallbill(Bill *ptr,int numbills)
{
	double ftotal;
	
	for(int i=0;i<numbills;i++)
	{
		computeonebill(ptr);
		
	ftotal+=ptr->getbill();
		++ptr;
	}
	cout<<"Sum of all bills is :"<<ftotal;
}

