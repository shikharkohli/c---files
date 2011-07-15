#include<iostream>
#include<vector>
#include<cstdio>

using namespace std;

int main()
{
	vector<int> num;
	int t;
	scanf("%d",&t);
	while(t--)
	{
		num.resize(0);
		int n;
		long int k;
		scanf("%d",&n);
		scanf("%ld",&k);
		int temp;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&temp);
			num.push_back(temp);
		}
		int last=num.at(num.size()-1);
		for(int i=0;i<num.size();i++)
		{
			num[i]=last&num[i]&num[(i+1)%num.size()];
			last=num[i];
		}
		if(k!=1)
			for(int i=0;i<n;i++)
				printf("%d ",num[num.size()-1]);
		else
			for(int i=0;i<num.size();i++)
				printf("%d ",num[i]);
		printf("\n");
	}
	return 0;
}
