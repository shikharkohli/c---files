#include<cstdio>

int gcd(int a,int b)
{
	if(b==0)
		return a;
	gcd(b,a%b);
}


int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		if(c%(gcd(a,b))!=0)
			printf("-1");

	}
	return 0;
}

