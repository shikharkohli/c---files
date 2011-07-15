#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

long long int retsum(long long int n)
{
	long long int i=1;
	long long int count=1;
	while(count<n){
		i*=2;
		i%=8388608;
	count++;}
	i=((i%8388608)*(n%8388608))%8388608;
	return i;
}

int main()
{

	vector<int> ans(3);
	ans[0]=1;
	ans[1]=6;
	ans[2]=24;//cout<<"Here now";
	for(long long int i=3;i<23;i++)
	{
		ans.push_back(((2*ans[i-1])%8388608+retsum(i+1))%8388608);
	}
	int sum=0;
	vector<int> finalans(ans.size());
	for(int i=0;i<ans.size();i++)
	{	sum+=ans[i];
		sum%=8388608;
	 	finalans[i]=sum;	
	}
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int index;
		scanf("%d",&index);
		if(index>22)
			index=22;
		printf("%d\n",finalans[index-1]);
	}
	return 0;
}
