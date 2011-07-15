#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#include<iostream>

using namespace std;

int main()
{
	char cards[3]={'B','A','C'};
	int t;
	scanf("%d",&t);
	while(t--)
	{
		string swaps;
		//strcpy(swaps,"\0");
		cards[0]='B';
		cards[2]='C';
		cards[1]='A';
		cin>>swaps;//cout<<swaps<<endl;
		if(swaps[0]==0){printf("M -\n");cout<<swaps<<"-";;continue;}
			//cout<<int(swaps[0])<<endl;
			for(int i=0;i<swaps.length();i++)
			{
				//printf("%c",swaps[i]);
				if(swaps[i]=='L')
					swap(cards[0],cards[1]);
				if(swaps[i]=='R')
					swap(cards[1],cards[2]);
				if(swaps[i]=='E')
					swap(cards[0],cards[2]);
				//if(swaps[i]=='F');
			}
			for(int i=0;i<3;i++)
			{
				//printf("%s\n",cards);
				if(cards[i]=='A')
				{
					if(i==0)
						printf("L");
					if(i==1)
						printf("M");
					if(i==2)
						printf("R");
					break;
				}
			}
			printf("\n");
			
	}
	return 0;
}
