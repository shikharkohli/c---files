#include<stdio.h>

int main()
{
	int d,n,k;
	scanf("%d",&d);
	while(d--)
	{
		scanf("%d%d",&n,&k);
		if(((n-k) & ((k-1)/2))==0)
			printf("1\n");
		else
			printf("0\n");
	}
	return 0;
}
