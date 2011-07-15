//Magic square using recursion
#include<iostream>

using namespace std;

int check(int A[][10],int n)
{
	int sumr=0,sumc=0,m=n*n;m+=1;m/=2;m*=n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			sumr+=A[i][j];
			sumc+=A[j][i];
		}
		if(sumc!=m || sumr!=m)
			return 0;
	}
	return 1;
}	

void print(int A[][10],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<A[i][j]<<"###";
		}
		cout<<endl;
	}
	cout<<endl<<"-----------"<<endl;
}


void square(int A[][10],int n,int i,int j)
{
	if(i==n-1 && j==n-1) {cout<<"square ends"<<endl;return;}
	if(j==n-1 &&  i!=n-1)
	{
		cout<<"At"<<i<<","<<j<<endl;
		j=0;i+=1;
		square(A,n,i,j);
	}
	else
	{
		for(int l=1;l<=(n*n);l++)
		{
			A[i][j]=l;
			if(A[i][j]==(n*n))j++;print(A,n);
			square(A,n,i,j);
		}
		
	
	}
}
		


int main()
{
	int A[10][10];
	square(A,3,0,0);
}	
