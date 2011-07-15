#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	int a,b;
	while(t--)
	{
		scanf("%d %d",&a,&b);
		/*while(a%2==0 && a%5==0 && a!=0)
		{
			a/=2;
			a/=5;
		}*/
		a=a%10;
		if(b==0)
		{
			printf("1\n");
			continue;
		}
		b=b%4;
		if(b==0)
			b=4;
		int temp=1;
		while(b--)
		{
			temp*=a;
			temp%=10;
		}
		printf("%d\n",temp);
	}
	return 0;
}
