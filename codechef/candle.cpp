#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
       int candles[10];int num=-1;
       for(int i=0;i<10;i++)
       {
	       scanf("%d",&candles[i]);
	   }
       for(int i=0;i<10;i++)
       {
	      if(candles[i]==0)
	      {	     num=i;break;}
       }
       for(int i=1;i<10;i++)
	       if(candles[i]==0) {num=i;break;}
       if(num!=-1)
       {

	       if(num==0)
	       {
		       printf("10\n");
		       continue;
	       }
	       else{printf("%d\n",num);continue;}
	}
       int less=candles[1],lessindex=1;
       for(int i=1;i<10;i++)
	       if(candles[i]<less)// && ((lessindex<i) && (lessindex!=0)))
	       {
		       //less=candles[i];

		       lessindex=i;
		       less=candles[i];
	       }
       if(candles[0]<less) {lessindex=0;less=candles[0];}
       if(lessindex==0) printf("1",lessindex);
       for(int i=0;i<=less;i++)
	       printf("%d",lessindex);
       printf("\n");
      }
    return 0;
}
