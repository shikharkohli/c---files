#include<cstdio>
#include<cmath>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a,b,c;
		scanf("%d",&a);
		scanf("%d",&b);
		scanf("%d",&c);
		printf("%.3f\n",sqrt((b+c)*(b+c)+(a*a)));
	}
	return 0;
}
