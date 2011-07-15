#include<iostream>
#include<cstdlib>

using namespace std;

struct fare_info
{
	int flight_number;
	int code_number;
	int amount;
	int discount;
};

fare_info d[100];
int l=0;

void fare_info_enter();
void fare_info_view();
void mainmenu();

void fare_infochoice()
{
	int ch;
	do
	{
		system("clear");
		cout<<"Enter choice\n\t1.Enter fare information\n\t2.View fare information\n\t3.Main menu\n\t";
		cin>>ch;
		switch(ch)
		{
			case 1:fare_info_enter();break;
			case 2:fare_info_view();break;
			case 3:return;
		}
	}while(1);
}

void fare_info_enter()
{
	if(l==99)
	{
		cout<<"Out of memory"<<endl;
		return;
	}
	cout<<"Enter flight number ";cin>>d[l].flight_number;
	cout<<"Enter code number ";cin>>d[l].code_number;
	cout<<"Enter amount ";cin>>d[l].amount;
	cout<<"Enter discount ";cin>>d[l].discount;
}

void fare_info_view()
{
	cout<<"FLIGHT NO 	CODE NO		AMOUNT		DISCOUNT"<<endl;
	for(int z=0;z<l;z++)
	{
		cout<<d[l].flight_number<<"	"<<d[l].code_number<<"		"<<d[l].amount<<"	"<<d[l].discount<<endl;
	}
	getchar();getchar();
}
