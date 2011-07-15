#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	int t,n;
	int arr[100][100];
	scanf("%d",&t);
	while(t--)
	{
		//int n;
		scanf("%d",&n);
		memset(arr,0,sizeof(arr));
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<=i;j++)
			{
				scanf("%d",&arr[i][j]);
			}
		}

