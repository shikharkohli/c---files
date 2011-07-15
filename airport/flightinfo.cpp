#include<iostream>

using namespace std;

struct flight_info
{
	int id;
	int no_seats;
	char type_name;
};

void flight_info_enter();
void flight_info_view();
void mainmenu();

flight_info c[100];
int k=0;

void flight_infochoice()
{
	int ch;
	do
	{
		system("clear");
		cout<<"Enter choice\n\t1.Enter flight data\n\t2.View flight data\n\t3.Main menu\n\t";
		cin>>ch;
		switch(ch)
		{
			case 1:flight_info_enter();break;
			case 2:flight_info_view();break;
			case 3:return;
		}
	}while(1);
}

void flight_info_enter()
{
	if(k==99)
	{
		cout<<"Out of memory";
		return;
	}
	cout<<"Enter flight id ";
	cin>>c[k].id;
	cout<<"Enter number of seats ";
	cin>>c[k].no_seats;
	cout<<"Enter type name ";
	cin>>c[k].type_name;
	k++;
}

void flight_info_view()
{
	cout<<"ID	NUM SEATS	TYPE"<<endl;
	for(int z=0;z<j;z++)
	{
		cout<<c[k].id<<"	"<<c[z].no_seats<<"	"<<c[z].type_name<<endl;
	}
	getchar();getchar();
}
