#include<iostream>

using namespace std;

int main()
{
   int i=1;int powers[30];
   int temp=0;
   while(temp<30)
    {
      i=i<<1;
      powers[temp]=i;
      temp++;
   }
   int t;
   scanf("%d",&t);int ans[1000000];int p=0;
   while(t--)
   {
      int n;	   
      scanf("%d",&n);
      int k=0;
      for(k=0;k<30;k++)
      {
      	if(powers[k]>n)
	{
	    //printf("%d,",powers[k-1]);
	    ans[p++]=powers[k-1];
	    break;
	}
      }
   }
   for(int i=0;i<p;i++)
	   printf("%d\n",ans[i]);
   return 0;
}
