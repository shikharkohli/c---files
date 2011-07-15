//Preemptive scheduling
#include<iostream>
#define E 0
#define P 1
#define W 2

using namespace std;

struct process
{
	int pid;
	int at;
	int bt;
	int rt;
};


void presched(process p[],int n)
{
	process wait[n];int state[10];
//	int k=0;
	for(int i=0;i<10;i++)
		state[i]=0;
	int tot=0;
	for(int i=0;i<n;i++)
	{
		tot+=p[i].bt;
	}
	for(int i=p[0].at-1;i<=(tot+p[0].at);i++)
	{
		int k=0;
		while(k<n)
		{
			if(p[k].at==i)
			{
				



int main()
{
	int k=1,n;
	process p[10];
	cout<<"Enter the number of processes ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter arrival time";
		cin>>p[i].at;
		cout<<"Enter burst time ";	
		cin>>p[i].bt;
		p[i].pid=k++;
		p[i].rt=p[i].bt;
	}
	process temp;
	for(int i=0;i<n;i++)
		for(int j=0;j<n-i-1;j++)
		{
			if(p[j].at>p[j+1].at)
			{
				temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;
			}
		}
	for(int i=0;i<n;i++)
	{
		cout<<p[i].pid<<"	"<<p[i].at<<"	"<<p[i].bt<<"	"<<endl;
	}
	//presched(p,n);
	return 0;
}
