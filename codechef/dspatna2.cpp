#include<iostream>
#include<cstdio>

int main()
{
	int w,x,y,z;int t=4;
	while(1)
	{
		char str[100];
		scanf("%s",str);
		//printf("%s\n",str);
		if(sscanf(str,"%d.%d.%d.%d",&w,&x,&y,&z)<=0) return 0;
		//printf("%d\n",x);
		if(w==127)
		{
			printf("Invalid\n");
			continue;
		}
		if(w<=126 && w>=1)
		{
			printf("Class A\n");
			continue;
		}
		if(w>=128 && w<=191)
		{
			printf("Class B\n");
			continue;
		}
		if(w>=224 && w<=239)
		{
			printf("Class D\n");
			continue;
		}
		if(w>=240 && w<=255)
		{
			printf("Class E\n");
			continue;
		}
		printf("Invalid\n");
	}
	return 0;
}
