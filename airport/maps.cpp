#include<map>

using namespace std;

airports_info a[100];
airp_info b[100];

void airportairplanemap()
{
	multimap<int,int> allowedtoland;
	for(int temp=0;temp<i;temp++)
	{
		for(int temp1=0;temp1<j;temp1++)
		{
			cout<<endl;
			cout<<"Do you want airplanes of type "<<b[temp1].type<<" to land at "<<a[temp].code<<"?";
			char ch;
			ch=getchar();
			if(ch=='y' or ch=='Y')
			{
				int t=a[temp].code;
				//allowedtoland[t]=b[temp1].type;
				allowedtoland.insert(pair<int, int>(t, b[temp1].type));
			}
		}
	}
}		
