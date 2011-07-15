#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
	long long int m,n;
	cin>>n>>m;
	int temp=n;
	long long int count=0;
	while(temp) {temp/=10;count++;}
	temp=n;
	int div=0;
	int mul=10;
	for(int i=1;i<count;i++)
		mul*=10;
	count=1;
	while(!div)
	{
		if(n%m==0)
		{	div=1;cout<<count<<endl;}
		else
		{
			n*=mul;n+=temp;count++;n%=m;
		}
		if(count>m){
			printf("-1\n");break;}
	}
	}
	return 0;
}
