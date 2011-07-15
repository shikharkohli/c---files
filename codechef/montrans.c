#include<stdio.h>

int main()
{
	int t,a,b,c1;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d",&a,&b,&c1);
		double sum=0.0;int stepmax=0,step=0;
		double dollar=a*100+b,c=((double)c1)/100;
		dollar/=100;
		printf("%d %d %d\n",a,b,c1);
		double dol;
		double cent;
		sum=dollar;
		printf("--->%f<---\n",dollar);
		while(dollar>=c)
		{
			//dollar-=c;
			//step+=1;
			if(dollar>sum)
			{
				sum=dollar;
				stepmax=step;
			}
			dollar-=c;
			step+=1;
			dol=(int)dollar;
			cent=dollar-(int)dollar;
			dollar=cent*100+dol/100;
			//dollar/=100;
			printf("\t%f\n",dollar);
		}
		printf("%d\n",stepmax);
	}
	return 0;
}
