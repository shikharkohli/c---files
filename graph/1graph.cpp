#include<iostream>

using namespace std;

struct node
{
	char name;
	node *next;
	//edge *edgelist;
};

struct edge
{
	char from,to;
	node *nextnode;
	node *nextedge;
};

class graph
{
	node *start;
	public:
	graph(){start=NULL;}
	void insertnode();
	void insertedge();
};

void graph::insertnode()
{
	node *temp=new node;
	cout<<"Enter node name ";
	temp->name=getchar();cout<<temp->name<<endl;
	//temp->edgelist=NULL;
	temp->next=NULL;
	if(start==NULL)
	{
		start=temp;
	}
	else
	{
		temp->next=start;
		start=temp;
	}
}

void graph::insertedge()
{
	edge *temp=new edge;char f,t;
	cout<<"From edge? ";f=getchar();cout<<f<<endl;
	cout<<"To edge? ";t=getchar();cout<<t<<endl;
	temp->from=f;temp->to=t;
	node *temp1=start;
	while(temp1->name!=f && temp1!=NULL)
		temp1=temp1->next;
	if(temp1==NULL) return;
	edge *begin=temp1->edgelist;
	if(begin==NULL)
	{
		temp1->edge=temp;
	}
	else
	{
		edge *tempo=temp1->edge;
		while(tempo->next!=NULL)
		{
			tempo=tempo->next;
		}
		tempo->next=temp1;
		temp1->nextedge=NULL;
	}
	temp1=start;
	while(temp1->name!=t && temp1!=NULL)
		temp1=temp1->next;
	temp->nextnode=temp1;
}

void display(graph g)
{
	node *temp1=start;
	edge *temp2;
	while(temp1!=NULL)
	{
		cout<<temp1->name;
		temp2=temp1->edgelist;
		while(temp2!=NULL)
		{
			cout<<"("<<temp2->f<<","<<temp2->t<<"), ";
			temp2=temp2->nextedge;
		}
		temp1=temp1->next;
	}
}


int main()
{
	graph g;
	g.insertnode();
g.insertnode();g.insertnode();g.insertnode();g.insertnode();
	g.insertedge();
g.insertedge();g.insertedge();g.insertedge();g.insertedge();
	display(g);
	return 0;
}
