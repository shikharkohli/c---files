//TODO
#include<string.h>
#include<stdio.h>


int main()
{
	int t,minpos[10000],pos,k=0,len;
	char maxval[10000];
	char str[10002];
	char minchar;int i,j,x;
	scanf("%d",&t);
	while(t--)
	{
		
		scanf("%s",str);
		len=strlen(str);//.length();
		minchar=str[0];
		for(i=0;i<len;i++){
			if(str[i]<minchar)
				minchar=str[i];
		}
		memset(minpos,0,sizeof(minpos));
		memset(maxval,0,sizeof(maxval));
		k=0;
		for(i=0;i<len;i++)
		{
			if(str[i]==minchar)
				minpos[k++]=i;
		}
		if(k==len)
		{
			printf("1\n");
			continue;
		}
		if(k==1)
		{
			printf("%d\n",minpos[0]+1);
			continue;
		}
		int count=0;
		int pos1;
		for(i=1;i<len;i++)
		{
			count=0;
			for(j=0;j<k;j++)
			{
				if(str[(minpos[j]+i)%len]>maxval[j])
				{
					maxval[j]=str[(minpos[j]+i)%len];
				}
			}
			char minchar3=maxval[0];
			for(x=0;x<k;x++)
			{
				if(maxval[x]<minchar3)
					minchar3=maxval[x];
			}
			for(x=0;x<k;x++)
			{
				if(minchar3==maxval[x])
				{	count++;pos1=minpos[x];}
				if(count==2)
					break;
			}
			if(count==1) {printf("%d\n",pos1+1);i=len+1;}
		}
	}
	return 0;
}
