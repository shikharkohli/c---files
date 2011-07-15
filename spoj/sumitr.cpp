#include<iostream>
#include<cstring>

using namespace std;

int m[200][200],s_=0,n;

void s(int A[][200],int k,int i,int j)
{
	if(i==n && j==n)
		return;
	k+=A[i][j];
	if(k>s_)
		s_=k;
	else
		return;
	if(s_>m[i][j])
		m[i][j]=s_;
	else 
		return;
	if(i<n){
		s(A,k,i+1,j);
		s(A,k,i+1,j+1);
	}
}

int main()
{
	int t,A[200][200];
	cin>>t;
	while(t--)
	{
	cin>>n;
	memset(A,0,sizeof(A));
	memset(m,0,sizeof(m));
	for(int i=0;i<n;i++)
		for(int j=0;j<=i;j++)
			cin>>A[i][j];
	s_=0;
	s(A,0,0,0);
	cout<<s_<<endl;
	}
}
