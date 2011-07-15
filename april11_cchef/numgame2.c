#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	int n;
	while(t--)
	{
		scanf("%d",&n);
		if(n%4==1)	
			printf("ALICE\n");
		else
			printf("BOB\n");
	}
	return 0;
}
