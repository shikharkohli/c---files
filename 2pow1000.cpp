#include<iostream>
#include<cstring>
#define max 10000
using namespace std;

int main()
{
	int arr[max];
	memset(arr,0,sizeof(arr));
	arr[max-1]=1;
	int i=0;
	while(i<=999)
	{
		int carry=0;
		for(int x=max-1;x>=0;x--)
		{
			arr[x]*=2;
			arr[x]+=carry;
			if(arr[x]>=10)
			{carry=1;arr[x]%=10;}
			else
				carry=0;

		}
		i++;
		//for(int x=20;x<max;x++)
		// 	cout<<arr[x];
//		cout<<endl;
	}
	int sum=0;int count=0;
	for(int i=0;i<max;i++)
	{sum+=arr[i];
		if(arr[i]!=0) count++;
		if(count!=0) cout<<arr[i];}
	cout<<endl<<sum<<endl;
	return 0;
}
