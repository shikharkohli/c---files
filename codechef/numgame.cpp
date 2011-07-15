#include<cstdio>

using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n;
		scanf("%ld",&n);
		if(n%2==0)
			printf("ALICE\n");
		if(n%2==1)
			printf("BOB\n");
	}
	return 0;
}

