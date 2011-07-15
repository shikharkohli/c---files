#include<iostream>

using namespace std;

int main()
{
	int t;
	cin>>t;
	int a=1001;
	int prime[1100];
	int k=0;
	while(a<10000)
	{
		int flag=0;
		for(int i=2;i*i<=a && !flag;i++)
			if(a%i==0)
				flag=1;
		if(!flag)
			prime[k++]=a;
		a++;
	}
    for(int i=0;i<k;i++)
		cout<<prime[i]<<endl;
	return 0;
}
