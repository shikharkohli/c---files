//Fix input, should terminate only when a single zero is encountered and not in the case of 0 10 or 0 15 etc
#include<cstdio>

int main()
{
     int a,b;int k=0;
     int num[100][2];num[0][0]=1;
     int list[10];
     /*do{
	    scanf("%d",&num[++k][0]);
	    if(num[k][0]==0) break;
	    scanf("%d",&num[k][1]);
     }while(num[k-1][0]!=0);
     */
     while((scanf("%d %d",&num[k][0],&num[k][1]))==2 && num[k][0]!=0)
     {
     	k++;
     }
     for(int i=0;i<k;i++)
     {
	   int l=0;
	   while(l<10)
	   	list[l++]=0;
	   if(num[i][0]<num[i][1])
	   {
	   for(int j=num[i][0];j<=num[i][1];j++)
	   {
		  int temp=j;
		  while(temp!=0)
		  {
			  list[temp%10]+=1;
		  	  temp/=10;
	          }
	    }
	    }
	    else
	    {
	    for(int j=num[i][0];j>=num[i][1];j--)
	   {
		  int temp=j;
		  while(temp!=0)
		  {
			  list[temp%10]+=1;
		  	  temp/=10;
	          }
	    }
	    }
	    l=0;
	    printf("Case %d: ",i+1);
	    while(l<10)
	    {
		printf("%d:%d ",l,list[l]);
		l++;
    	    }
	    printf("\n");
      }
    return 0;
}
