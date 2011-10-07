#include<stdio.h>

//using namespace std;

int main()
{
	int arr[100001];
	arr[0]=0;
	int sum=0;
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=1;i<=n;i++)
	{
		sum=0;
		for( j=1;i>=j*j;j++)
		{
			if(i%j==0)
				sum++;
		}
		arr[i]=sum+arr[i-1];
		//cout<<sum<<endl;
	}
	//cout<<arr[n]<<endl;
	printf("%d\n",arr[n]);
}
