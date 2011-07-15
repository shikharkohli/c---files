//TODO (k=100)
#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
	int t;
	char str[]="zyxwvutsrqponmlkjihgfedcba";
	scanf("%d",&t);
	while(t--)
	{
		int k;int count=0;
		scanf("%d",&k);
		if(k<26)
		{
			while(k>=0)
			{
				printf("%c",str[25-(k--)]);
			}
		}
		else
		{
			int mod=(k%26)+1;
			int rep=k/26;
			if(rep==0)
			{
				while(mod)
				{
					printf("%c",str[25-(mod--)]);
				}
			}
			else
			{mod+=1;
				while(rep--)
				{   char lastchar=str[25-mod];
					while(mod--)
					{
						char newchar=str[25-mod];
						printf("%c",str[25-mod],count);
						if(newchar>lastchar)
							count++;
						lastchar=newchar;
					}
					printf("%s",str);count+=25;
				}
			}
		}
		printf("\n");
	//	printf("  %d\n",count+1);
	}
	return 0;
}
	

