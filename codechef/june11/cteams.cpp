#include<iostream>
#include<vector>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<algorithm>

using namespace std;

struct chef
{
	long long int a;
	int r;
};

bool func(chef a,chef b)
{
	if(a.a<b.a)
		return true;
	return false;
}

int main()
{
	chef chefs[100000];
	memset(chefs,0,sizeof(chefs));
	int n;
	scanf("%d",&n);int k=0,sumr=0,sum=0,len;chef temp;
	while(n--)
	{	
		scanf("%lld %d",&temp.a,&temp.r);
		sumr+=temp.r;
		chefs[k++]=temp;
		sort(chefs,chefs+k,func);
		if(k&1)
		{
			len=k/2+1;
		}
		else
			len=k/2;
		sum=0;
		for(int i=0;i<len;i++)
		{
			sum+=chefs[i].r;
		}
		printf("%d\n",abs(sum-(sumr-sum)));
	}	
	return 0;
}
