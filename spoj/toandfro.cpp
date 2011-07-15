#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main()
{
	char code[300];
	int c,r;
	char arr[30][30];
	while((scanf("%d",&c) && c!=0))
	{
		scanf("%s",&code);
		memset(arr,0,sizeof(arr));
		r=strlen(code)/c;int k=0;
		for(int i=0;i<r;i++)
		{
			if(i%2==0)
			{
				for(int j=0;j<c;j++)
				{
					arr[i][j]=code[k++];
				}
			}
			else
			{
				for(int j=c-1;j>=0;j--)
					arr[i][j]=code[k++];
			}
		}
		for(int i=0;i<c;i++)
			for(int j=0;j<r;j++)
				cout<<arr[j][i];//<<endl;
		cout<<endl;
	}
	return 0;
}

