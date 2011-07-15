//TODO with better algo on tc
#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

int main()
{
	int t,minpos[10000],pos,k=0,len;
	char maxval[10000];
	char str[10000];
	char minchar;
	scanf("%d",&t);
	while(t--)
	{
		
		scanf("%s",str);
		len=strlen(str);//.length();
		minchar=str[0];
		for(int i=0;i<len;i++){
			if(str[i]<minchar)
				minchar=str[i];
		}
		memset(minpos,0,sizeof(minpos));
		memset(maxval,0,sizeof(maxval));
		k=0;
		for(int i=0;i<len;i++)
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
        int i=0,j=i+1;
        while(j<len)
        {
            for(k=0;k<len && (str[(i+k)%len]==str[(j+k)%len]);k++);
            if (k==len) break;
            if(str[(i+k)%len]>str[(j+k)%len])
            {
                    i=max(j,i+k+1);
                    j=i+1;
            }
            else
               j += k+1;
        }
        printf("%d\n",i+1);
		/*int count=0;
		int pos1;
		for(int i=1;i<len;i++)
		{
			count=0;
			for(int j=0;j<k;j++)
			{
				if(str[(minpos[j]+i)%len]>maxval[j])
				{
					maxval[j]=str[(minpos[j]+i)%len];
				}
			}
			char minchar3=maxval[0];
			for(int x=0;x<k;x++)
			{
				if(maxval[x]<minchar3)
					minchar3=maxval[x];
			}
			for(int x=0;x<k;x++)
			{
				if(minchar3==maxval[x])
				{	count++;pos1=minpos[x];}
				if(count==2)
					break;
			}
			if(count==1) {printf("%d\n",pos1+1);i=len+1;}
		}
        */
	}
	return 0;
}
