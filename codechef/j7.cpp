#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
	int t,p,s;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&p);
	    scanf("%d",&s);
	    double h1=0.0,h2=0.0;
	    double temp=0.0;
	    temp+=p*p;
	    temp-=(24*s);
	    temp=sqrt(temp);
	    h1=p+temp;h2=p-temp;
	    h1/=12;h2/=12;
	    double ans1=0,ans2=0;
	    ans1+=s*h1;
	    ans1/=2;
	    ans1-=((h1*h1*p)/4);
	    ans1+=h1*h1*h1;
	    ans2+=s*h2;
	    ans2/=2;
	    ans2-=((h2*h2*p)/4);
	    ans2+=h2*h2*h2;
	    printf("%.2f\n",max(ans1,ans2));//<<endl;
	}
	return 0;
}


