//LONGEST DECREASING SUBSEQUENCE

//Coded (and compiled) on a Linux box

#include<iostream>

using namespace std;

void lds(int arr[],int n)
{
	int start=0,fin=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			int flag=0;
			for(int k=i;k<j;k++)
			{
				if(arr[k+1]>arr[k])
				{
					flag=1;
				}
			}
			if(flag==0)
			{
				if((fin-start)<(j-i))
				{
					start=i;
					fin=j;
				}
			}
			
		}
	}
	cout<<"the start is "<<start+1<<" and the end is "<<fin+1<<endl;
}

int main()
{
	int arr[]={7,2,11,6,5,4,10};
	lds(arr,7);
	return 0;
}
	
