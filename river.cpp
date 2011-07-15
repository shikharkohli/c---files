#include<iostream>
//#include<conio.h>
#define MAX 16
using namespace std;



int main()
{
	
	int arr[MAX]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	int width=4;int j;//cout<<arr[0];
	for(int i=0;i<MAX;)
	{
		for(j=0;j<width;j++)
		{
			
			for(int k=0;k<j;k++)
				cout<<"  ";
			if(i<MAX)cout<<arr[i++]<<endl;
		}
		for(j=width-1;j>1;j--)
		{
			for(int k=1;k<j;k++)
				cout<<"  ";
			if(i<MAX)cout<<arr[i++]<<endl;
		}
	}
	cout<<endl;
	return 0;
}
