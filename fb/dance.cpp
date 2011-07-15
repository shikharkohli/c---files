#include<iostream>
#include<map>
#include<set>
#include<utility>
#include<cstring>

using namespace std;
int fincount=0x0fffffff;

int steps(char maze[100][100],int r,int c,map<char,set<pair<int,int> > > colors,int i,int j,int count,set<pair<int,int> > path,int calc[100][100])
{
	if(calc[i][j]<count)
	{
		return count;
	}
	else
	{
		calc[i][j]=count;
	}
	if(maze[i][j]=='E')
	{	
		if(count<fincount){
		fincount=count;
		cout<<fincount<<endl;//<<","<<maze[i][j]<<endl;
		/*for(set<pair<int,int> >::iterator i=path.begin();i!=path.end();i++){
			cout<<"("<<i->first<<","<<i->second<<") ";
			cout<<endl;
			}*/

		}
		
		return fincount;}
	/*if(fincount==5){
		for(set<pair<int,int> >::iterator i=path.begin();i!=path.end();i++)
			cout<<"("<<i->first<<","<<i->second<<") ";
			cout<<endl;
			}*/
	path.insert(make_pair(i,j));
	if(maze[i][j]>=49 && maze[i][j]<=57)
	{
		set<pair<int,int> > colorpath=colors[maze[i][j]];
		for(set<pair<int,int > >::iterator i=colorpath.begin();i!=colorpath.end();i++)
		{
			if(path.find(*i)==path.end())
			{
				steps(maze,r,c,colors,i->first,i->second,count+1,path,calc);
			}
		}
	}
	/*if((i-1)>=0 &&(j-1)>=0 && maze[i-1][j-1]!='W' && maze[i-1][j-1]!='S')
	{	
	//	for(set<pair<int,int> >::iterator k=path.begin();k!=path.end();k++)
	//	{
			if(path.find(make_pair(i-1,j-1))==path.end())
			{
				steps(maze,r,c,colors,i-1,j-1,count+1,path,calc);
			}
	//	}
	}*/
	if((i-1)>=0 &&(j)>=0 && maze[i-1][j]!='W' && maze[i-1][j]!='S')
	{	
	//	for(set<pair<int,int> >::iterator k=path.begin();k!=path.end();k++)
	//	{
			if(path.find(make_pair(i-1,j))==path.end())
			{
				steps(maze,r,c,colors,i-1,j,count+1,path,calc);
			}
	//	}
	}
	/*if((i-1)>=0 &&(j+1)>=0 && maze[i-1][j+1]!='W' && maze[i-1][j+1]!='S')
	{	
			if(path.find(make_pair(i-1,j+1))==path.end())
			{
				steps(maze,r,c,colors,i-1,j+1,count+1,path,calc);
			}
	}*/
	if((i)>=0 &&(j-1)>=0 && maze[i][j-1]!='W' && maze[i][j-1]!='S')
	{	
	//	for(set<pair<int,int> >::iterator *i=path.begin();i!=path.end();i++)
	//	{
			if(path.find(make_pair(i,j-1))==path.end())
			{
				steps(maze,r,c,colors,i,j-1,count+1,path,calc);
			}
	//	}
	}
	if((i)>=0 &&(j+1)>=0 && maze[i][j+1]!='W' && maze[i][j+1]!='S')
	{	
	//	for(set<pair<int,int> >::iterator *i=path.begin();i!=path.end();i++)
	//	{
			if(path.find(make_pair(i,j+1))==path.end())
			{
				steps(maze,r,c,colors,i,j+1,count+1,path,calc);
			}
	//	}
	}
	/*if((i+1)>=0 &&(j+1)>=0 && maze[i+1][j+1]!='W' && maze[i+1][j+1]!='S')
	{	
	//	for(set<pair<int,int> >::iterator *i=path.begin();i!=path.end();i++)
	//	{
			if(path.find(make_pair(i+1,j+1))==path.end())
			{
				steps(maze,r,c,colors,i+1,j+1,count+1,path,calc);
			}
	//	}
	}*/
	if((i+1)>=0 &&(j)>=0 && maze[i+1][j]!='W' && maze[i+1][j]!='S')
	{	
	//	for(set<pair<int,int> >::iterator *i=path.begin();i!=path.end();i++)
	//	{
			if(path.find(make_pair(i+1,j))==path.end())
			{
				steps(maze,r,c,colors,i+1,j,count+1,path,calc);
			}
	//	}
	}
/*if((i+1)>=0 &&(j-1)>=0 && maze[i+1][j-1]!='W' && maze[i+1][j-1]!='S')
	{	
	//	for(set<pair<int,int> >::iterator *i=path.begin();i!=path.end();i++)
	//	{
			if(path.find(make_pair(i+1,j-1))==path.end())
			{
				steps(maze,r,c,colors,i+1,j-1,count+1,path,calc);
			}
	//	}
	}*/
}
		
		


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int r,c;cin>>r>>c;
		char maze[100][100];int calc[100][100];
		for(int i=0;i<100;i++)
			for(int j=0;j<100;j++)
				calc[i][j]=0x7fffffff;
		map<char,set<pair<int,int> > > colors;
		memset(maze,'W',sizeof(maze));
		int startr,startc,endr,endc;
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++)
			{	cin>>maze[i][j];
				if(maze[i][j]>=49 && maze[i][j]<=57)
				{
					pair<int,int> temp;temp.first=i;temp.second=j;
					colors[maze[i][j]].insert(temp);

				}
				if(maze[i][j]=='S')
					{startr=i,startc=j;}
				if(maze[i][j]=='E')
				{endr=i,endc=j;}
			}}
	/*	for(map<char,set<pair<int,int> > >::iterator i=colors.begin();i!=colors.end();i++)
		{
			set<pair<int,int> > temp=i->second;cout<<i->first<<"  ";
			for(set<pair<int,int> >::iterator j=temp.begin();j!=temp.end();j++)
			{
				cout<<"("<<j->first<<","<<j->second<<")  ";
			}
			cout<<endl;
	}*/
	fincount=0x0fffffff;
	set<pair<int,int> > path;
	steps(maze,r,c,colors,startr,startc,0,path,calc);cout<<fincount<<endl;
	
	}
		return 0;
}

