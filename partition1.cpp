//Number of ways to write an integer as the sum of other integers
#include<iostream>

using namespace std;

int tot=0;

int num(int n,int sum,int k)
{
	cout<<k<<" + ";
	if(sum==n) 
	{
		tot++;
		cout<<endl;
		return 0;
	}
	if(n==1)
	{
		tot++;
		return 0;
	}
	for(int i=1;i<n;i++)
	{
		num(n-i,sum+i,i);
	}
}

int main()
{
	//cut<<num(2,0)<<endl;
	num(4,0,0);
	cout<<endl<<tot-1<<endl;
	return 0;
}
