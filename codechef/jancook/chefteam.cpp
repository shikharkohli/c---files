//TODO
#include<cstdio>
#include<algorithm>
#include<vector>

using namespace std;

long double c(long double n,long double r)
{
	if(n==r)
		return 1;
	if(r==1 || (n-r)==1)
		return n;
	r=min(r,n-r);
	long double ans=1;
	for(long double i=n-r+1;i<=n;i++)
		ans*=i;
	for(long double i=1;i<=r;i++)
		ans/=i;
	return ans;
}


int main()
{
	vector< vector<int> > combs;
	for(long int i=1;i<
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long double  n,k;
		scanf("%Lf %Lf",&n,&k);
		long double ans=c(n,k);
		//ans*=k;
		//ans/=n;
		printf("%.0Lf\n",ans);
	}
	return 0;
}

