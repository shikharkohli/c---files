#include<iostream>

using namespaces std;

int path(int maze[50][50],int startx,int starty,int m,int n,int decision)
{
	if(maze[startx][starty]=='*')
		return decision;
	if(start

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;int startx,starty;
		char maze[50][50];
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
			{
				scanf("%c",maze[i][j]);
				if(maze[i][j]=='M')
					startx=i,starty,=j;
			}
		path(maze,startx,starty,m,n,0);
	}
	return 0;
}

