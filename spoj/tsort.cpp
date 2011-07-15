#include<algorithm>
#include<cstdio>

using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	int i=t-1;
	int A[1000000];
	while(i>=0)
		scanf("%d",&A[i--]);
	sort(A,A+t);
	i++;
	while(i<t)
		printf("%d\n",A[i++]);
	return 0;
}
