#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
	int t;
	int n;
	int m;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&m);
		if(n%m==0)
		{
			printf("1\n");
			continue;
		}
		int k=1;
		int num=n,pow=0;
		while(n>0)
		{
			n/=10;pow++;
		}
		n=num;
		int mul=1;
		int tenmul=1;
		for(int x=0;x<pow;x++)
		{
			tenmul*=10;
			tenmul%=m;
		}
		int flag=0,prev;
		int mulfactor=n;
		while(flag==0)
		{
			mulfactor*=tenmul;
			mulfactor%=m;
			//mulfactor*=n;
			mulfactor+=(n%m);
			//cout<<k<<",";
			if(prev==mulfactor%m)
			{
				flag=1;
				printf("-1\n");
			}
			prev=mulfactor%m;
			if(mulfactor%m==0)
			{
				printf("%d\n",k+1);
				flag=1;
			}
			prev=n;
			k++;
		}
	}
	return 0;
}
