//Shortest job first non-preemptive
//The average waiting time should be in float, not int
#include<iostream>
#define FALSE 0
#define TRUE 1
using namespace std;


struct process
{
	int pid;
	int at;
	int bt;
	int tr; //time to completion
	int toc; //time of completion
};

int  minrem(process p[])	//process with minimum remaining time
{
	int min=p[0].tr,pos=-1;
	for(int i=0;i<4;i++)
		if(p[i].tr!=0)
		{
			min=p[i].tr;
			pos=i;
		}

	for(int i=0;i<4;i++)
	{
		if(p[i].tr==0)
			continue;
		if(p[i].tr<min)
		{
			min=p[i].tr;
			pos=i;
		}
	}
	return pos;
}

void sjfp(process p[])
{
	process wlist[4];process temp;
	for(int i=0;i<4;i++)
		for(int j=0;j<=4-i;j++)
		{
			if(p[j].at>p[j+1].at)
			{
				temp=p[j];
				p[j]=p[j+1];
				p[j]=temp;
			}
		}
	for(int i=0;i<4;i++)
	{
		cout<<"Pid -> "<<p[i].pid<<" at -> "<<p[i].at<<endl;
	}
	
	int t=p[0].at;
	int finallist[100],k=0;
	int sum=0;
	for(int i=0;i<4;i++)
		sum+=p[i].bt;
	int ce=0; //process index currently being executed
	cout<<"Total execution time is "<<sum<<endl;
	while(t<=sum)
	{
		finallist[k++]=p[ce].pid;	
		int k1=minrem(p);
		if(k1==-1)
			break;
		if(k1!=ce)
		{
			p[k1].toc+=2;
			ce=k1;
		}
		p[ce].tr--;
		if(p[ce].tr==0)
			p[ce].toc+=t;
		t++;
	}
	cout<<endl;int prev=finallist[0];
	int l=0;
	for(int i=0;i<k;i++)
	{
		if(prev!=finallist[i])
		{
			cout<<"Process "<<prev<<" executed for ";
			if(prev==finallist[0])
				cout<<l;
			else
				cout<<l+1;
			cout<<" seconds "<<" after which "<<finallist[i]<<" executed "<<endl;
			prev=finallist[i];
			l=0;
		}
		else
			l++;
	}
	cout<<"Process "<<prev<<" executed for "<<l+1<<" seconds.\nAll processes executed"<<endl;

	cout<<"--------------------------------------------"<<endl;
	float awt=0.0;
	for(int i=0;i<4;i++)
		awt+=-p[i].at-p[i].bt+p[i].toc;
	awt/=4.0;
	cout<<"Average waiting time "<<awt<<endl;
	//	cout<<p[i].toc<<endl;
}
			
	
int main()
{
	process p[4];
	cout<<"Enter process details "<<endl;
	for(int i=0;i<4;i++)
	{
		p[i].pid=i+1;
		cout<<"\n\tEnter arrival time ";cin>>p[i].at;
	        cout<<"\n\tEnter burst time ";cin>>p[i].bt;
		p[i].tr=p[i].bt;
		p[i].toc=0;
	}
	sjfp(p);
	return 0;
}
				
