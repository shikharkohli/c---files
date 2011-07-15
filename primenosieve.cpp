//Sieve of Sundarram
#include<iostream>
#include<cstdlib>

using namespace std;

int main(int argc,char *argv[])
{
	int n;
	n=atoi(argv[1]);
	int num[1000000];
	for(int i=0;i<4*n;i++)
	    num[i]=i+1;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=i;j++)
		{
			if((i+j+(2*i*j)<=n))
				num[i+j+2*i*j-1]=-1;
		}
	for(int i=0;i<n;i++)
		if(num[i]!=-1)
		   cout<<(2*num[i]+1)<<"   ";
	return 0;
}
