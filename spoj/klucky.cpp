#include<cstdio>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
	unsigned int list[8000],k=0;
	while(k<8000)
	{
		for(int i=1;k<8000;i++)
			for(int j=1;j<=i;j++)
				list[k++]=pow(5,i)+(pow(5,i-j)==1?0:pow(5,i-j));
	}
	k=0;
	sort(list,list+118);
	int t;
	scanf("%d",&t);
	int n;
	while(t--)
	{
		scanf("%d",&n);
		printf("%d",list[n-1]);
	}
	return 0;
}
