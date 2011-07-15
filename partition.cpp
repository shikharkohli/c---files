//Number of ways to write an integer as the sum of other integers
#include<iostream>

using namespace std;

int tot=0;

int num(int n,int sum,int k,int ornum)
{
	cout<<k<<" + ";
	if(sum==ornum) 
	{
		tot++;
		cout<<endl;
		return 0;
	}
	for(int i=1;i<=n;i++)
	{
		num(n-i,sum+i,i,ornum);
	}
}

int main()
{
	//cut<<num(2,0)<<endl;
	num(4,0,0,4);
	cout<<endl<<tot<<endl;
	return 0;
}
