#include<iostream>
#define MAX 3
using namespace std;

int check(int A[9][9])
{
	int checka[9];
	int checkb[9];
	for(int i=1;i<=9;i++)
	{
		checka[i-1]=0;
		checkb[i-1]=0;
	}
	for(int i=0;i<9;i++)
	for(int j=0;j<9;j++)
	{
		int temp=A[i][j];
		int temp1=A[j][i];
		checka[temp-1]++;
		checkb[temp1-1]++;
		if(checka[temp-1]>1)
			return 0;
		if(checkb[temp1-1]>1)
			return 0;
	}
	return 1;
}

void print(int A[MAX][MAX])
{
	for(int i=0;i<MAX;i++)
	{	
		for(int j=0;j<MAX;j++)
			cout<<A[i][j]<<" ";
		cout<<endl;
	}
	cout<<endl<<"--------------"<<endl;
}

int c(int A[3][3])
{
	cout<<"Checking"<<endl;
	int check[9];int i;
	for(i=1;i<10;i++)
		check[i-1]=0;
	for(i=0;i<3;i++)
	for(int j=0;j<3;j++)
	{
		int temp=A[i][j];
		check[temp-1]++;
		if(check[temp-1]>0)
			return 0;
	}
	return 1;


void sudoku(int A[MAX][MAX],int i,int j)
{
	if(i==MAX-1 && j==MAX-1)
	{
		for(int i=1;i<=9;i++)
		{
			A[MAX-1][MAX-1]=i;
		//	if(c(A))
				print(A);//cout<<endl<<"-------"<<endl;
		}
		return;
	}
	if(j==3)
	{
		j=0;
		i+=1;
	}
	if(i==3)
		return;
	int max=1;
	for(int x=0;x<3;x++)
	for(int y=0;y<3;y++)
	if(A[x][y]>max)
		max=A[x][y];
//	if(max==9)
//		return;
	for(int k=max;k<10;k++)
	{
		A[i][j]=k;
		sudoku(A,i,j+1);
	}
}
int main()
{
	int grid[MAX][MAX];int i=0,j=0;cout<<"Declarations done!"<<endl;
	
	cout<<"Finding...";
	sudoku(grid,0,0);
	return 0;
}	
