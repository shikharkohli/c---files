#include<iostream>
#include "port.cpp"
#include "airplaneinfo.cpp"
#include "fareinfo.cpp"
#include "flightinfo.cpp"
#include<map>
#include "maps.cpp"

using namespace std;

//extern airports_info a[100];

struct route_info
{
	int airp_id;
	char name[100];
	char date[15];
	int flight_number;
	int dept_airport;
	int dept_time;
	int arrv_airport;
	int arrv_time;
};



void  mainmenu()
{

	int ch=10;
	while(ch){
		system("clear");
		cout<<"Enter choice :\n\t1. Airport information\n\t2.Airplane information\n\t3.Flight information\n\t4.Fare information\n\t5.Map data\n\t6.Exit\n\tChoice: ";
	cin>>ch;
	switch(ch)
	{
		case 1:airportchoice();break;
		case 2:airplanechoice();break;
		case 3:flight_infochoice();break;
		case 4:fare_infochoice();break;
		case 5:airportairplanemap();break;
	}
	if(ch==6) return;
	}
}

int main()
{
	
	mainmenu();
	return 0;
}
