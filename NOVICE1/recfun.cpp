#include<cstdio>
//#include<iostream>

using namespace std;

int main()
{
	int ans[15][14];
	for(int i=0;i<14;i++)//{
		ans[0][i]=i+1;//cout<<ans[0][i]<<"  ";}
		//cout<<endl;
	for(int i=1;i<15;i++)
		//{
		for(int j=0;j<14;j++)
			{
				int temp=0;ans[i][j]=0;
				while(temp<=j)
				{
					ans[i][j]+=ans[i-1][temp++];
				}
			//	cout<<ans[i][j]<<"  ";
			}
			//cout<<endl;}
	int t;
	
	scanf("%d",&t);
	while(t--)
	{
		int k,n;
		scanf("%d",&k);
		scanf("%d",&n);
		//printf("%d %d %d\n",t,k,n);
		printf("%d\n",ans[k][n-1]);
	}
	return 0;
}

