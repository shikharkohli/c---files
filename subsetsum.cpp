//Integer partitions
//TODO convert to DP
#include<iostream>

using namespace std;

long long int x=0;

void partition(long long int arr[100],int curr,int sum,int previndex)
{
    if(curr>=sum)
    {
		x++;
	}
	else
	{
		for(long long int i=0;arr[i]<sum;i++)
		{
			if(curr+arr[i]>sum)
				break;
			if(arr[i]<=(sum-curr) && previndex<=i ) //Change <= to < to get distinct
				partition(arr,curr+arr[i],sum,i);
		}
	}
}

	


int main()
{
    long long int arr[100];
    for(long long int i=0;i<100;i++)
		arr[i]=i+1;
    long long int n;
    cin>>n;
    partition(arr,0,n,-1);
	cout<<x+1<<endl;
    return 0;
}
