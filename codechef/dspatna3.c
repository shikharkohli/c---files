#include<stdio.h>
#define MIN(a,b) a<b?a:b
int gcd(int a,int b)
{
	if(a%b==0)
		return a;
	gcd(b,a%b);
}

int main()
{
	freopen("input.txt","w",stdin);	
	int a,b,c;
	while(scanf("%d",&a) && scanf("%d",&b) && scanf("%d",&c))
	{
		printf("Checking");
		if(a%2==0 && b%2==0 && c%2==0)
		{
			printf("NO");
			continue;
		}
		else
		{
			int i;
			for( i=3;i<MIN(a,b);i+=2)
			{
				if(a%i==0 && b%i==0 && c%i==0)
				{
					printf("NO");
					break;
				}
			}
		}
		printf("YES");
	}
	fclose(stdin);
	return 0;
}
