#include<iostream>

using namespace std;

int main()
{
	char url[10][101];int r[10];
	int t;
	cin>>t;int temp=1;
	while(t--)
	{
		int max=0;
		for(int i=0;i<10;i++)
		{
			cin>>url[i]>>r[i];
			if(r[i]>max)
				max=r[i];
		}
		cout<<"Case #"<<temp++<<":\n";
		for(int i=0;i<10;i++)
		{
			if(max==r[i])
				cout<<url[i]<<endl;
		}
	}
	return 0;
}
