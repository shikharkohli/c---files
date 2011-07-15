#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<iostream>
using namespace std;

int main()
{
	int t;
    scanf("%d",&t);//printf("%d",t);
	while(t--)
	{
		char word[100];
		cin>>word;
		int hole=0;
		for(int i=0;i<strlen(word);i++)
		{
			switch(word[i])
			{
				case 'A':hole++;break;
				case 'D':hole++;break;
				case 'O':hole++;break;
				case 'P':hole++;break;
				case 'Q':hole++;break;
				case 'R':hole++;break;
				case 'B':hole+=2;break;
			}
		}
		printf("%d\n",hole);
	}
	return 0;
}
