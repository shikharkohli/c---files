//Non monotonic subsequence incomplete
#include<iostream>
#include<stdio.h>


using namespace std;

int nextlowest(int arr[100],int len,int n)
{
	for(int i=n;i<len;i++)
	{
		if(arr[i+1]<arr[i])
			n++;
		else
			return n;
	}
	return n;
}


int nexthighest(int arr[100],int len,int n)
{
	
	for(int i=n;i<len;i++)
	{
		if(arr[i+1]>arr[i])
			n++;
		else
			return n;
	}
	return n;
}
	
	

int main()
{
	int arr[20]={2,3,4,1,6,7,3,4,9,8,1,2,6,7,4,5,3};int len=17;

		cout<<arr[0]<<" ";
		for(int i=0;i<len;i++)
		{
			if(i%2==1)
				i=nextlowest(arr,len,i);
			else
				i=nexthighest(arr,len,i);
			cout<<arr[i]<<" ";char ch;
		//	getchar();
		}
		cout<<endl;
	
	return 0;
		
}
	
