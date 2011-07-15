#include<iostream>
#include<cstdio>

int way=0;

void change(int n,int val)
{
   if(n==0)
   {
      way+=1;
      return;
   }
   if(n<0)
      return;
   change(n-1,1);
   change(n-10,10);
   change(n-5,5);
   change(n-25,25);
}


using namespace std;

int main()
{
    int way=0;int n;cin>>n;
    if(n==0)
    {cout<<"0";return 0;}
    for(int i=0;i<=(n/25);i++)
    {
	for(int j=0;j<=(n/10);j++)
	{	
		for(int k=0;k<=(n/5);k++)
		{       
						
			for(int l=0;l<=n;l++)
			{   
			    int sum=0;
			    sum+=25*i;
			    sum+=10*j;
			    sum+=5*k;
			    sum+=l;
			    if(sum==n)
				    way++;
		       }
		}
	}
   }
   cout<<way;
   return 0;
}
