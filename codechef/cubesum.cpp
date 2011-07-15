#include<cstdio>
#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	int mat[100][100][100];
	int t;
	int ans[100][100][100];
	memset(mat,0,sizeof(mat));
	memset(ans,0,sizeof(ans));
	scanf("%d",&t);
	while(t--)
	{
		int x,y,z;
		scanf("%d %d %d",&x,&y,&z);
		for(int i=1;i<=x;i++)
			for(int j=1;j<=y;j++)
				for(int k=1;k<=z;k++)
					scanf("%d",&mat[i][j][k]);
	    /*
		for(int i=1;i<=x;i++)
		{
			for(int j=1;j<=y;j++)
				for(int k=1;k<=z;k++)
					{	ans[i][j][k]=mat[i][j][k]+ans[i-1][j-1][k-1];
						int a=0;
						while(a<k)
							ans[i][j][k]+=mat[i][j][a++];
						a=0;
						while(a<j)
							ans[i][j][k]+=mat[i][a++][k];
						a=0;
						while(a<i)
							ans[i][j][k]+=mat[a++][j][k];
						cout<<ans[i][j][k]<<" ";
					}
		

					//	cout<<mat[i][j][k];
			cout<<endl;
		}
		*/
		for(int i=1;i<=x;i++)
		{
			for(int j=1;j<=y;j++)
				for(int k=1;k<=z;k++)
					{	ans[i][j][k]=mat[i][j][k]-ans[i-1][j-1][k-1];
						int a=0;
						//while(a<k)
						//	ans[i][j][k]-=mat[i][j][a++];
						ans[i][j][k]-=mat[i][j][k-1];
						a=0;
						//while(a<j)
						//	ans[i][j][k]-=mat[i][a++][k];
						ans[i][j][k]-=mat[i][j-1][k];
						//a=0;
						//while(a<i)
						//	ans[i][j][k]-=mat[a++][j][k];
						ans[i][j][k]-=mat[i-1][j][k];
						cout<<ans[i][j][k]<<" ";
					}
		

					//	cout<<mat[i][j][k];
			cout<<endl;
		}

	}
	return 0;
}
