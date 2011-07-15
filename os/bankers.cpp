//Banker's algorithm, safety only
#include<iostream>

using namespace std;

int allover(int finish[],int pro)
{
	int sum=0;
	for(int i=0;i<pro;i++)
	{
		if(finish[i]==0)
		{
			sum+=1;
		}
	}
	return sum;
}

int less_(int avbl[20],int need[][20],int pos,int res)
{
	for(int i=0;i<res;i++)
	{
		if(avbl[i]<need[pos][i])
			return 0;
	}
	return 1;
}

void safety(int avbl[20],int alloc[][20],int max[][20],int need[][20],int res,int pro)
{
	int finish[10];
	for(int i=0;i<pro;i++)
	{
		finish[i]=0;
	}
	int i=0;
	/* The condition to end the loop is that just one process is waiting
	 * A better solution would be to keep track of finish[] and end the
	 * loop if finish[] is in the same state for two consecutive iterations
	 * However, the current method should be fine.
	 */
	while(allover(finish,pro)!=1)
	{
		if(less_(avbl,need,i,res))
		{	finish[i]=1;
			for(int j=0;j<res;j++)
			{
				avbl[j]+=alloc[i][j];
				alloc[i][j]=0;
			}
			cout<<i<<",";
		}
		i=(i+1)%pro;
	}
	i=0;
	for(;i<pro;i++)
		if(finish[i]==0)
			break;
	if(less_(avbl,need,i,res))
		cout<<i;
	else
		cout<<"\nERROR UNSAFE STATE ";
}
		

int main()
{
	
	int avbl[20],alloc[10][20],max[10][20],need[10][20];
	int res,pro;
	cout<<"Enter the number of resources ";
	cin>>res;
	cout<<"Enter the number of processes ";
	cin>>pro;
	cout<<"Enter available instances of each resource ";
	for(int i=0;i<res;i++)
	{
		cout<<"\n\tAvailable instances of resource "<<i+1<<" ";
		cin>>avbl[i];
	}
	for(int i=0;i<pro;i++)
	{
			cout<<"Max requirement of resource by process "<<i<<" ";
		for(int j=0;j<res;j++)
		{
			cin>>max[i][j];
	
		}
	}
	for(int i=0;i<pro;i++)
	{
			cout<<"Allocation of resources to process "<<i<<" ";
		for(int j=0;j<res;j++)
		{
			cin>>alloc[i][j];
			need[i][j]=max[i][j]-alloc[i][j];
		}
	}
	safety(avbl,alloc,max,need,res,pro);
	return 0;	
}
