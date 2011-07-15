#include<iostream>
#include<cstdlib>


using namespace std;

struct airp_info
{
	int type;
	int max_seats;
	char company[100];
};

void airp_info_view();
void airp_info_enter();
void mainmenu();

extern airp_info b[100];
extern int j=0;

void airplanechoice()
{
	int ch;
		{
		system("clear");
		cout<<"Enter choice\n\t1.Enter airplane data\n\t2.View airplane data\n\t3.Main menu\n\t";
		cin>>ch;
		switch(ch)
		{
			case 1:airp_info_enter();break;
			case 2:airp_info_view();break;
			case 3:return;
		}
	}while(1);
}

void airp_info_enter()
{
	if(j==99)
	{
		cout<<"Out of memory";
		return;
	}
	cout<<"Enter airplane type ";
	cin>>b[j].type;
	cout<<"Enter maximum seating capacity ";
	cin>>b[j].max_seats;
	/*cout<<"Enter owner company ";
	cin>>b[j].company;*/
	cout<<"Done";
}

void airp_info_view()
{
	airp_info b[100];
	cout<<"TYPE	MAX SEATS	OWNER"<<endl;
	for(int k=0;k<j;k++)
	{
		cout<<b[k].type<<"	"<<b[k].max_seats<<"	"<<b[k].company<<endl;
	}
	getchar();getchar();
}
