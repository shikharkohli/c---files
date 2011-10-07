//anarc05b - the double helix
#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

int main()
{
	int arr1[10000],arr2[10000],n,k,totsum=0,sum1=0,sum2=0;
	while(1)
	{
		totsum=0;sum1=0;sum2=0;
		memset(arr1,0,sizeof(arr1));
		memset(arr2,0,sizeof(arr2));
		scanf("%d",&n);
		if(n==0)
			return 0;
		for(int i=0;i<n;i++)
			scanf("%d",&arr1[i]);
		scanf("%d",&k);
		for(int i=0;i<k;i++)
			scanf("%d",&arr2[i]);
		for(int i=0;i<max(n,k);i++)
		{
			if(arr1[i]==arr2[i])
			{
				totsum+=max(sum1,sum2);
				sum1=sum2=0;
				totsum+=arr1[i];
			}
			if(i<k)
				sum2+=arr2[i];
			if(i<n)
				sum1+=arr1[i];
		}
		printf("%d\n",totsum);
	}
	return 0;
}
