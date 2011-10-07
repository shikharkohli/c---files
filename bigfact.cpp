#include<iostream>
#include<vector>
#include<cstring>
#define MAX 160 

using namespace std;

void print(int arr[])
{
	int count = 0,sum=0;
	for(int i=0;i<MAX;i++)
	{
		//sum+=arr[i];
		if(arr[i]!=0)
			count = 1;
		if(count!=0)
		{	cout<<arr[i];sum++;}
	}
	cout<<endl;
	cout<<sum<<endl;
}

void increment(int arr[])
{
	arr[MAX-1]+=1;
	if(arr[MAX-1] > 9)
	{
		for(int i=MAX-1;i>=0;i--)
		{
			if(arr[i]>=10)
			{
				arr[i-1] += arr[i] / 10;
				arr[i]%=10;
			}
		}
	}
}

void mul(int arr[],int num[])
{
	//arr*num
	int limn=0;
	for(int i=0;i<MAX;i++)
	{
		if(arr[i]!=0)
		{
			limn=i;
			break;
		}
	}
	int lima=0;
	for(int i=0;i<MAX;i++)
	{
		if(arr[i]!=0)
		{
			lima=i;
			break;
		}
	}		
	int temp[MAX];
	for(int i=0 ; i<MAX;i++)
		temp[i]=0;
	for(int i=MAX-1;i>=0;i--)
	{
		for(int j=MAX-1;j>=0;j--)
		{
			temp[j-((MAX-1)-i)] += arr[j]*num[i];
			if(temp[j]>=10)
			{
				temp[j-1-((MAX-1)-i)] += temp[j-((MAX-1)-i)]/10;
				temp[j-((MAX-1)-i)] %= 10;
			}
		}
	}
	for(int i=MAX-1;i>=0;i--)
		if(temp[i]>=10)
		{
			temp[i-1]+=temp[i]/10;
			temp[i]%=10;
		}
	for(int i=0;i<MAX;i++)
		arr[i]=temp[i];
}

int main()
{
	int n=100;
	cout<<"Enter the value of n ";
	cin>>n;
	int facts[100][160];
	memset(facts,0,sizeof(facts));
	for(int x=1;x<=100;x++){
	int num[MAX],arr[MAX];
	for(int i=0;i<MAX;i++)
		num[i]=0;//=facts[x-1]=0;
	num[MAX-1]=1;
	facts[x-1][MAX-1]=1;
	for(int i=1;i<=n;i++)
	{
		mul(facts[x-1],num);
		increment(num);
	}
	
	//print(facts[x-1]);cout<<endl;
	}
	print(facts[n-1]);cout<<endl;
	/*int t;cin>>t;
	while(t--)
	{
		int num;cin>>num;
		print(facts[num-1]);
	}
	return 0;
	*/
}

