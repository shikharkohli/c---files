#include<cstdio>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int z=0;
		for(int i=n;i>=5;i--)
		{while(i%5==0)
		{
			
			z+=(i/5);i/=5;
		}}
		printf("%d\n",z);
	}
	return 0;

}
