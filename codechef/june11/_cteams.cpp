#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>

using namespace std;

struct chef
{
	int a,r;
};


bool comp(chef a,chef b)
{
	if(a.a<b.a)
		return true;
	else
		return false;
}

int main()
{
	vector<chef> chefs;
	int n;
	scanf("%d",&n);int sum=0;
	while(n--)
	{
		chef temp;
		scanf("%d %d",&temp.a,&temp.r);
		chefs.push_back(temp);
		sum+=temp.r;
		if(chefs.size()==1)
			printf("%d\n",temp.r);
		else
		{
			sort(chefs.begin(),chefs.end(),comp);
			int len=chefs.size();
			if(len%2==1)
				len=(len/2)+1;
			else
				len/=2;
			int lowsum=0;
			for(int i=0;i<len;i++)
				lowsum+=chefs[i].r;
			printf("%d\n",max((sum-lowsum)-lowsum,lowsum-(sum-lowsum)));
		}
	}
	return 0;
}
