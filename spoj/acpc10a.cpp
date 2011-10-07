#include<cstdio>

int main()
{
	int a,b,c;
	while(scanf("%d %d %d",&a,&b,&c) && !(a==0 && b==0 && c==0))
	{
		if(2*b==(a+c))
			printf("AP %d\n",2*c-b);
		if(b*b==a*c)
			printf("GP %d\n",(c*c)/b);
	}
	return 0;
}
