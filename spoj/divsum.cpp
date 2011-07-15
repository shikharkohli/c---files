#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int t;int k=0;
    //printf("Here");
    int num[200000],sum[500001];
    
    scanf("%d",&t);
    
    while(scanf("%d",&num[k++]) && (k<t));
	//for(int i=0;i<500000;i++)
	//	num[i]=i+1;
    int i;
	//for(i=0;i<k;i++)
	//   sum[(num[i])]=0;
    memset(sum,0,sizeof(sum));
    for( i=0;i<k;i++)
    {
    	int l=2;
		if(sum[(num[i])]>=1)
		{
			//i++;
			//printf("continues\n");
			continue;
		}
		sum[num[i]]=1;
		if(num[i]==1)
		{
			sum[num[i]]=0;
			continue;
		}
		while(l*l<num[i])
		{
		     if(num[i]%l==0)
	   	     	sum[num[i]]+=(l+(num[i]/l));
	   	  	 l++;
		}
		if(l*l==num[i])	
			sum[num[i]]+=l;
    }
    for( i=0;i<k;i++)
        printf("%d\n",sum[num[i]]);
    return 0;
}
	

