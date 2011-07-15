#include<iostream>
#include<cstring>
#define max 10 
using namespace std;

void print(int a[max][max])
{
	for(int i=0;i<max;i++)
	{
		for(int j=0;j<max;j++)
			cout<<a[i][j];
		cout<<endl;
	}
}
	
void add(int [][max],int []);

void mul(int a[max],int b[max],int c[max])
{
	int ans[max][max];int i,j;
	for( i=0;i<max;i++)
		for( j=0;j<max;j++)
			ans[i][j]=0;
	
	int at,bt;
	for(i=0;i<max;i++)
	if(a[i]==0)
	{
		at=i;
		break;
	}
	for(i=0;i<max;i++)
	if(b[i]==0)
	{
		bt=i;
		break;
	}
	int k=0;
	for(i=max-1;i>=bt;i--){
		k=max-1-i;
	for(j=max-1;j>=at;j--)
	{
		ans[max-1-i][max-1-k]+=b[i]*a[j];
		ans[max-i-1][max-k-2]+=ans[max-1-i][max-k-1]/10;
		ans[max-1-i][max-1-k]%=10;
		k++;
	}}
	print(ans);int mul[max];
	add(ans,mul);		
}

void add(int mat[max][max],int ans[max])
{
	int sum=0;for(int k=0;k<max;k++)
		ans[k]=0;
	for(int i=max-1;i>=0;i--)
	{
		sum=0;
		for(int j=0;j<max;j++)
		{
			sum+=mat[j][i];
		}
		cout<<sum<<",";
		ans[i]+=sum%10;
		if(i!=0) ans[i-1]+=sum/10;
	}
	cout<<endl<<endl;
	for(int i=0;i<max;i++)
		cout<<ans[i];
}
	
	
int main()
{
	int a[max],b[max];int i;
	for(i=0;i<max;i++)
	{
		a[i]=0;
		b[i]=0;
	}
	cout<<"Enter the first number ";
	char one[max];
	cin>>one;
	char two[max];
	cin>>two;
	int len=strlen(one);
	for(i=0;i<strlen(one);i++)
	{
		a[max+i-len]=one[i]-'0';}	
	len=strlen(two);
	for(i=0;i<len;i++)
	{
		b[max+i-len]=two[i]-'0';
	}
	int c[max];
	mul(a,b,c);
	return 0;		
}
