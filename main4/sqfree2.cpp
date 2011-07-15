#include<cstdio>
#include<cmath>
#include<vector>

using namespace std;

int main()
{
	int sq[100000];
	int t;
	scanf("%d",&t);
	for(int i=0;i<100000;i++)
		sq[i]=(i+2)*(i+2);
	vector<int> sqf;
	for(int i=1;i<=100000;i++)
		{
			int flag=0;
			for(int j=0;sq[j]<=i && !flag;j++)
			{
				if(i%sq[j]==0)
				{	
					flag=1;
				}
			}
			if(flag==0)
			{	
				sqf.push_back(i);
			}
		}
	while(t--)
	{
		int a,b;
		scanf("%d",&a);
		scanf("%d",&b);
		int count=0;
		for(int i=0;i!=sqf.size();i++)
		{
			if(sqf[i] >= a && sqf[i] <= b)
				count++;
		}
		printf("%d\n",count);
	}
	return 0;
}
