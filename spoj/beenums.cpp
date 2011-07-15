#include<cstdio>
#include<set>

using namespace std;

int main()
{
	int i=1,k=1;
	set<int> beenums;
	/*for(k=1;k<=1000000;k++)
	{
		beenums.insert(i);
		i=(i+6*k);
		k+=1;
	}*/
	while(scanf("%d",&i) && i!=-1)
	{
		int temp=i;int k=1;
		while(temp>1)
		{
			temp-=6*k;
			k+=1;
		}
		if(temp==1)
			printf("Y\n");
		else
			printf("N\n");
	}
	return 0;
}
