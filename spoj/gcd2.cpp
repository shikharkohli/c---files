#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<algorithm>

using namespace std;

int gcd(int a,int b)
{
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}

int main()
{
	int t;
	scanf("%d",&t);
	char num[251];
	int a,b,ten=1;
	while(t--)
	{
		ten=1;	
		scanf("%d",&a);
		scanf("%s",num);
		if(a==0 || atoi(num)==0){
			if(a==0)
				printf("%s\n",num);
			if(atoi(num)==0)
				printf("%d\n",a);
			continue;
		}
		b=0;
		for(int i=strlen(num)-1;i>=0;i--)
		{
			b+=((num[i]-'0')*ten)%a;
			ten*=10;
			ten%=a;
			b%=a;
		}
		printf("%d\n",gcd(a,b));
	}
	return 0;
}
