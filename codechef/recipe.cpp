#include<iostream>
#include<vector>
#include<cstdio>

using namespace std;

//typedef unsigned long long int ;
int  gcd(int  u, int  v)
{
	int shift;
	if (u == 0 || v == 0)
		return u | v;
	for(shift=0;((u | v) & 1)==0;++shift){
	 u>>=1;
	 v>>=1;
	}
	while((u & 1)==0)
		u>>=1;
	do {
 		while ((v & 1)==0) 
   		v>>=1;
 		if(u<v){
	 	v-=u;
 		}else{
		 int  diff=u-v;
	 	 u=v;
	 	 v=diff;
 		}
 	v>>=1;
	}while(v!=0);

	return u<<shift;
}

int main()
{
	int t;
	vector<int> num(50);
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		scanf("%d",&num[0]);
		int hcf=num[0];
		for(int i=1;i<n;i++)
		{
			scanf("%d",&num[i]);
			hcf=gcd(num[i],hcf);
		}
		for(int i=0;i<n;i++)
			printf("%d ",num[i]/hcf);
		printf("\n");
	}
	return 0;
}
