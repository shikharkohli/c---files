#include<iostream>

using namespace std;

void check(){}

void print(int board[][8])
{
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
			cout<<board[i][j]<<" ";
		}
		cout<<endl;
	}
}

void findq(int board[][8],int l)
{
	for(int i=0;i<8;i++)
	{
		board[l][i]=1;
		if(l<7) findq(board,l+1);
		board[l][i]=0;
	}
	print(board);cout<<endl;
}	

int main()
{
	int board[8][8];
	for(int i=0;i<8;i++)
		for(int j=0;j<8;j++)
			board[i][j]=0;
	findq(board,0);
	return 0;
}
