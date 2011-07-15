#include<iostream>
#include<cstring>
#define MAX 1000000

using namespace std;

int palin(int arr[])
{
	int start = 0;
	for(int i=0;i<MAX;i++)
	{
		if(arr[i]!=0)
		{
			start = i;
			break;
		}
	}
	int i = start,j= MAX-1;
	while(i<=j)
	{
		if(arr[i]!=arr[j])
			return 0;
		i++;
		j--;
	}
	return 1;
}

void nextpalin(int arr[])
{
	do
	{
		arr[MAX-1] += 1;
		int j = MAX-1;
		while(arr[j]>=10)
		{
			if(arr[j] >= 10)
			{
				arr[j-1] += arr[j]/10;
				arr[j]%=10;
			}
			j--;
		}
		int start = 0;
	}while(!palin(arr));
}




int main()
{
	int arr[MAX];
	char str[MAX];
	int k;
	cin>>k;
	int i = 0;
	while(i<k)
	{
		cin>>str;
		int len = strlen(str);
		int j=0;
		while(j<MAX)
		{
			arr[j] = 0;
			j++;
		}
		j=0;
		while(j<strlen(str))
		{
			arr[MAX-1-j] = str[strlen(str)-1-j] - '0';
			j++;
		}
		int start = 0;
		nextpalin(arr);
	        start = 0;
		for(int x = 0;x<MAX;x++)
		{
			if(arr[x] != 0)
				start = 1;
			if(start)
				cout<<arr[x];
		}
		i++;
	}
	return 0;
}
