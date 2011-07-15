#include<iostream>
#define MAX 1000

using namespace std;

int maxsum = 0;

void max_sum(int arr[][MAX],int i,int j,int sum,int n)
{
	if(i > n - 1)
		return;
	int newsum = sum + arr[i][j];
	if(newsum>sum)
	{
		sum += arr[i][j];
		//cout<<"SUM"<<sum;
		if(sum > maxsum)
			maxsum = sum;
	}
	//cout<<"("<<i<<","<<j<<")-->";
	max_sum(arr,i+1,j,sum,n);
	if(j <= i)
		max_sum(arr,i+1,j+1,sum,n);
}

int main()
{
	int n,arr[MAX][MAX];
	cin>>n;
	for(int i=0;i<MAX;i++)
		for(int j=0;j<MAX;j++)
			arr[i][j] = -1;
	for(int i=0;i<n;i++)
		for(int j=0;j <= i; j++)
			//cin>>arr[i][j];
			arr[i][j] = j + 1;
	int sum = 0;
	maxsum = sum;
	max_sum(arr,0,0,sum,n);
	cout<<"\nMax sum is "<<maxsum<<endl;
	return 0;
}
	
