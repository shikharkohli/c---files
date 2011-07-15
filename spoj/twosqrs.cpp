#include<cstdio>
#include<set>

using namespace std;

int main()
{
	long long int i=1;
	set<long long int> sq;
	for(i=1;i<=1000000;i++)
		sq.insert(i);
	long long int t,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int flag=0;
		for(set<long long int>::iterator i=sq.begin();i!=sq.end();i++)
		{
			if(sq.find(n-*i)!=sq.end())
			{
				printf("YES\n");
				flag=1;
				break;
			}
		}
		if(!flag)
			printf("NO\n");
	}
	return 0;
}
