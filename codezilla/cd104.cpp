#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
	int n,arr[300000];
	cin>>n;
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	int k=0;
	for(int i=0;i<n;i++)
		if((arr[i+1]-arr[i])==1)
		{
			k++;
			i++;
		}
	cout<<n-k-1<<endl;
	return 0;
}
