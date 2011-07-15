#include<iostream>
#define MAX 100

using namespace std;

void mul(int pow[])
{
	int temp[MAX];
	for(int i=0;i<MAX;i++)
		temp[i]=0;
	int count=0;
	for(int i=0;i<MAX;i++)
		if(pow[i]!=0)
			count=i;
	for(int i=MAX-1;i>=0;i--)
	{
		for(int j=MAX-1;j>=0;j--)
		{
			temp[j-((MAX-1)-i)] += pow[i]*pow[j];
			//cout<<"Multiplying  ";
			if(temp[j-((MAX-1)-i)]>=10)
			{
				temp[j-1-((MAX-1)-i)] += temp[j-((MAX-1)-i)]/10;
				temp[j-((MAX-1)-i)] = temp[j-((MAX-1)-i)]%10;
			}
		}
	}
	count=0;
	for(int i=0;i<MAX;i++)
	{	pow[i]=temp[i];
		if(temp[i]!=0)
			count=1;
		if(count)
		cout<<temp[i]<<" ";
	}
	cout<<endl;
	
}	

int main()
{
	int pow[MAX],n;
	for(int i=0;i<MAX;i++)
		pow[i]=0;
	pow[MAX-1]=2;
	cout<<"Enter the height ";cin>>n;
	for(int i=1;i<=n;i++)
		mul(pow);
	int count=0;
	for(int i=0;i<MAX;i++)
	{
		if(pow[i]!=0)
			count=1;
		if(count)
			cout<<pow[i];
	}
	return 0;
}

