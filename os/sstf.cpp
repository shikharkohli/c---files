//SSTF Disk Scheduling Algorithm
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int rs[100],n,head;
	cout<<"Enter the number of blocks you want to access ";
	cin>>n;
	cout<<"Enter the blocks, seperated by spaces ";
	for(int i=0;i<n;i++)
	{
		cin>>rs[i];
	}
	cout<<"Enter the position of the head ";
	cin>>head;
	int dist[100],flag=1;
	while(flag)
	{
		for(int i=0;i<n;i++)
		{
			if(rs[i]!=-1)
				dist[i]=fabs(rs[i]-head);
			else
				dist[i]=-1;
		}
		int min,pos=0;
		for(int i=0;i<n;i++)
		{
			if(dist[i]==-1)
				continue;
			min=dist[i];pos=i;
		}
		for(int i=0;i<n;i++)
		{
			if(dist[i]<min && dist[i]!=-1)
			{
				min=dist[i];
				pos=i;
			}
		}
		cout<<rs[pos]<<" ";
		head=rs[pos];
		rs[pos]=-1;dist[pos]=-1;
		int k=0,check=0;
		while(k<n)
		{
			if(rs[k]!=-1)
				check++;
			k++;
		}
		if(check==0)
			flag=0;	
	}
	return 0;
}
/*
 Enter the number of blocks you want to access 8
 Enter the blocks, seperated by spaces 98 183 37 122 14 124 65 67
 Enter the position of the head 53
 65 67 37 14 98 122 124 183 
 */
