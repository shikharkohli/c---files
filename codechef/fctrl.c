#include<stdio.h>

int main()
{
	long int t;
	scanf("%ld",&t);
	while(t--)
	{
		long int n;
		scanf("%ld",&n);
		int z=0;
		long int i=n;
		
		while(i)
		{
			
			z+=(i/5);i/=5;
		}
		printf("%d\n",z);
	}
	return 0;

}
