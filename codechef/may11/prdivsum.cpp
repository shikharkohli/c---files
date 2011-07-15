#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	int count=0;
	vector< pair <int,int> > pairs;
	for(long long int n=1;n<500;n++)
	{
	count=0;
	for(long long int i=1;i<=n;i++)
	{
		for(long long int j=1;j<i;j++)
		{
			if(((j*i)%(j+i))==0)
			{
				//cout<<i<<","<<j<<endl;
				count++;
				//if(n==50)
				//	pairs.push_back(make_pair(j,i));
			}
		}
	}
	cout<<n<<"-----"<<count<<","<<endl;
	}
	cout<<count<<endl;
	//sort(pairs.begin(),pairs.end());
	//for(int i=0;i<pairs.size();i++)
//		cout<<pairs[i].first<<","<<pairs[i].second<<endl;
	
	return 0;
}
