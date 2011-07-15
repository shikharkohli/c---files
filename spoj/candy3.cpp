#include<stdio.h>

int main()
{
	long long int t,n;
	long long int sum=0,temp1,temp2;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		sum=0;temp1=n;
		while(temp1--)
		{
			scanf("%lld",&temp2);
			sum+=temp2;
			sum%=n;
		}
		if(sum%n==0)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
