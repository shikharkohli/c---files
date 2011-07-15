#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,a,b,c;
		scanf("%d %d %d %d",&n,&a,&b,&c);
		int count=0;int N=n;
		for(int A=0;A<=a;A++)
		{
			for(int B=0;B<=b;B++)
			{
				for(int C=0;C<=c;C++)
					if(A+B+C<=N)
						count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
