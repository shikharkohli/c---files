#include<cstdio>


//using namespace std;


void print(int arr[])
{
	int l=0;
	for(int i=0;i<100;i++)
	{
		if(arr[i]!=0)
			l=1;
		if(l!=0)
			printf("%d",arr[i]);
	}
	printf("\n");
}

int main()
{
	int num[100];
	for(int i=0;i<100;i++)
	{
		num[99-i]=0;
	}
	for(int i=0;i<100;i++)
	{
		num[99]+=1;
		if(num[99]>=10)
		{
			int k=99;
			while(k>=0)
			{
				if(k>=0)
				{
					num[k]/=10;
					num[k-1]+=1;
					k--;				
				}
			}
		}
		print(num);

	}
	return 0;
}	
