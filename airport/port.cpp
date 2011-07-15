#include<iostream>
#include<cstdlib>

void airport_info_enter();
void airport_info_view();
void mainmenu();

using namespace std;

struct airports_info
{
	int code;
	char name[100];
	char city[100];
	char state[100];
};

extern int i=0;
extern airports_info a[100];
	

void airportchoice()
{
	int ch;
	do
	{
		system("clear");
		cout<<"Enter choice\n\t1. Enter airport information\n\t2. View airport information\n\t3. Back to main menu";
		cin>>ch;
		switch(ch)
		{
			case 1: airport_info_enter();break;
			case 2: airport_info_view();break;
			case 3: return;
		}
	}while(1);
}

void airport_info_enter()
{
	if(i==9)
	{
		cout<<"Out of memory";
		return;
	}
	cout<<"Enter airport code ";
	cin>>a[i].code;
	cout<<"Enter airport name ";
	cin>>a[i].name;
	cout<<"Enter city name ";
	cin>>a[i].city;
	cout<<"Enter state name ";
	cin>>a[i].state;
	i++;
}

void airport_info_view()
{
	cout<<endl<<"CODE	NAME		CITY		STATE"<<endl;
	for(int k=0;k<=i;k++)
	{
		cout<<a[k].code<<"	"<<a[k].name<<"		"<<a[k].city<<"		"<<a[k].state<<"	"<<endl;
	}
	getchar();getchar();
}
