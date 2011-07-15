//Non monotonic subsequence
#include<iostream>
#include<stdio.h>

using namespace std;

int nextlowest(int arr[100],int n)
{
	for(int i=n;i<100;i++)
	{
		if(A[j+1]<A[j])
			n++;
	}
	return n;
}
	

int main()
{
	int arr[10]={4,3,2,1};
	int l=nextlowest(arr,0);
	cout<<arr[l]<<endl;
	return 0;
}
	
