//eXuN 09 question 6 incomplete
#include<iostream>
#include<stdio.h>

using namespace std;


int path(int arr[][10],int n,int i,int j)
{
	if(i!=n && j!=n)
	{
		if((arr[i][j+1]-arr[i][j])>(arr[i+1][j]-arr[i][j]))
		{
			cout<<"->("<<i<<","<<j<<")";
			
			path(arr,n,i+1,j);
		}
		else
		{

				cout<<"->("<<i<<","<<j<<")";
				if(j==n-1)
				{
					path(arr,n,i+1,j);
				}
				else
					path(arr,n,i,j+1);

		}
	}
}

int main()
{
	int arr[10][10];
	int i,j,n;
	cout<<"Enter the value for n ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d ",&arr[i][j]);
			
		}
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			cout<<arr[i][j]<<"  ";
		cout<<endl;
	}
	cout<<endl;//int sum=0;
	path(arr,n,0,0);cout<<"->("<<n-1<<","<<j-1<<")"<<endl;
	return 0;
}
