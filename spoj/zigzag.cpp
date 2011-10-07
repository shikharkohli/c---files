//Zigzag traversal of a matrix
#include<stdio.h>
#define R 50
#define C 50

using namespace std;

int main(int argc,char *argv[])
{
    int arr[R][C];	
	int row=atoi(argv[1]);
	int col=atoi(argv[2]);
	int k=0;
	int i,j;
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			arr[i][j]=++k;
	int r=0;
	while(r<row)
	{
		int tempr=r;
		int tempcol=0;
		while(tempr>=0 && tempcol<col)
			printf("%d ",arr[tempr--][tempcol++]);
		r++;
	}
	int c=1;
	while(c<col)
	{
		int tempcol=c;
		int tempr=row-1;
		while(tempcol<col && tempr>=0)
			printf("%d ",arr[tempr--][tempcol++]);
		c++;
	}
	return 0;
}

