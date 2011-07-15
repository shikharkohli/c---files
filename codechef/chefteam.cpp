#include<cstdio>
#include<iostream>

using namespace std;

long long int gcd(long long int a,long long int b)
{
	if(a>b)
		swap(a,b);
	while(b%a!=0)
	{
		long long int temp=a;
		a=b%a;
		b=temp;
	}
	return a;
}

int main()
{
	//printf("%d\n",gcd(12,100));
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,k;
		scanf("%lld%lld",&n,&k);
		long long int y=max(n,n-k);
		long long int x=min(n,n-k);long long int ans=1;
		for(long long int i=0;i<n;i++)
		{
			if(y>i) ans *= ((n-i)/gcd(y-i,n-i))/((y-i)/gcd(n-i,y-i));
				else ans *= (n-i);
			if(x>i)ans /= (x-i);
			
		}	
		cout<<ans<<endl;
	}
	return 0;
}
