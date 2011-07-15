#include<iostream>

using namespace std;

struct process
{
	int pid;
	int bt;
	int rt;
};

void rr(process p[],int ts,int n)
{
	int flag=1;
	int i=0;
	while(flag)
	{
		if(p[i].rt==0)
		{
			i=(i+1)%n;
			continue;
		}
		if(p[i].rt<=ts && p[i].rt!=0)
		{
			p[i].rt=0;
			cout<<p[i].pid<<"  ";
			i=(i+1)%n;
		}
		if(p[i].rt>ts)
		{
			p[i].rt-=ts;
			cout<<p[i].pid<<" ";
			i=(i+1)%n;
		}
		int sum=0;
		for(int k=0;k<n;k++)
		{
			sum+=p[k].rt;
		}
		if(sum==0)
			return;
	}
}

int main()
{
	process p[10];
	cout<<"Enter the total number of processes ";
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter pid ";
		cin>>p[i].pid;
		cout<<"Enter burst time ";
		cin>>p[i].bt;
		p[i].rt=p[i].bt;
	}
	int ts;
	cout<<"Enter timeslice ";
	cin>>ts;
	rr(p,ts,n);
	cout<<"Exit sequence initiated ";
	return 0;
}
		
