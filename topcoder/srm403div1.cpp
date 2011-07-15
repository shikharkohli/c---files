#include<iostream>

using namespace std;

int count(int a,int b)
{
	int count=0;
	int temp;
	for(;a<=b;a++)
	{
		temp=a;
		int flag=0;
		while(temp>0)
		{
			cout<<temp<<endl;
			if(temp%10==4 || temp%10==7)
			{
				temp/=10;
			}
			else
			{
				temp=-1;flag=1;
			}
		}
		cout<<"-----------"<<endl;
		if(!flag)
			count++;
	}
	return count;
}

int main()
{
	cout<<count(74,77)<<endl;
	return 0;
}
