#include<cstdio>
#include<cmath>

int main()
{
	int sq[100000];
	int t;
	scanf("%d",&t);
	for(int i=0;i<100000;i++)
		sq[i]=(i+2)*(i+2);
	while(t--)
	{
		int a,b;
		scanf("%d",&a);
		scanf("%d",&b);
		int count=0;
		for(int i=a;i<b;i++)
		{
			int flag=0;
			for(int j=0;sq[j]<b && !flag;j++)
			{
				if(i%a[j]==0)
					flag=1;
			}
			count++;
		}
		printf("%d\n",count);
	}
	return 0;
}
