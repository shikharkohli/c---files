#include<iostream>
#include<vector>
#include<cstdio>

using namespace std;

int main()
{
	int t,flag=0;
	/*vector<int> primes;
    primes.push_back(2);
	for(int i=3;i<=999983;i+=2)
	{
		
		for(int j=0;(primes[j]*primes[j])<=i && flag==0;j+=1)
			if(i%primes[j]==0)
				flag=1;
		if(!flag)
		{
			primes.push_back(i);
		}

		flag=0;
	}
    */
    //for(int i=0;i<100;i++)
        //cout<<primes[i]<<endl;
	long long int nans=1,dans=1,num;
	//int len=primes.size();
    scanf("%d",&t);
    //cout<<"len-->"<<len<<endl;
    while(t--)
	{
		nans=1,dans=1;
		scanf("%lld",&num);
        //num=1000000;
        if(num==1){
          printf("1\n");continue;}
    vector<int> primes;
    primes.push_back(2);int len=primes.size();
	for(int i=primes[len-1];i<=num && len<=num;i+=1)
	{
		
		for(int j=0;(primes[j]*primes[j])<=i && flag==0;j+=1)
			if(i%primes[j]==0)
				flag=1;
		if(!flag)
		{
			primes.push_back(i);
		}

		flag=0;
	}
		for(int i=0;i<len && primes[i]<=num;i++)
		{
			if(num%primes[i]==0)
			{
				nans*=primes[i]-1;
				dans*=primes[i];
			}
		}
		printf("%lld\n",(num*nans)/dans);
	}
	return 0;
}
