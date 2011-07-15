//TODO
#include<cstdio>
#include<algorithm>

using namespace std;

long long int c(int n,int r)
{
	if(n==r)
		return 1;
	if(r==1 || (n-r)==1)
		return n;
	r=min(r,n-r);
	long long int ans=1;
	for(int i=n-r+1;i<=n;i++)
		ans*=i;
	for(int i=1;i<=r;i++)
		ans/=i;
	return ans;
}


int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,k;
		scanf("%d %d",&n,&k);
		long long int ans=c(n-1,k-1);
		//ans*=k;
		//ans/=n;
		printf("%lld\n",ans);
	}
	return 0;
}

