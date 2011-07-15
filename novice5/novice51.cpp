#include<iostream>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	//for(int i=1;i<100000;i++)
	{

		int n;
		cin>>n;
		char winner[][7]={"Aayush","Akash"};
		int point=1;
		while(n!=0)
		{
			if(n%2==0)
			{
				n/=2;
				if(point==0) point=1;
				else
					point=0;
			}
			else
			{
				n-=1;
				if(point==0) point=1;
				else
					point=0;
			}
		}
		cout<<winner[point]<<endl;
	}
	return 0;
}

