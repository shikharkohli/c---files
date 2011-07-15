#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
	int num=1;
	int t;
	long long int n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&n);
		if(n==1)
		{
			printf("192\n");continue;
		}
		if(n%2==1)
		{
			printf("%lld92\n",1+((n/2))*5);
		}
		else
		{
			printf("%lld42\n",4+((n/2)-1)*5);
		}
	}
	return 0;
}
