#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

int main()
{
	char arr[50][50];
	int t,n,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		memset(arr,0,sizeof(arr));
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				cin>>arr[i][j];
		for(int i=n-1;i>=0;i--)
			for(int j=n-1;j>=0;j--)
			{
				if(arr[i][j]=='B' || arr[i][j]=='R')
				{
					int temp=j;
					while(arr[i][j+1]=='.')
						j++;
					swap(arr[i][temp],arr[i][j]);
				}
			}
		char lasthor=arr[0][0],lastver=arr[0][0];
		int counthor=0,countver=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
			//	cout<<arr[i][j]<<" ";
			}
			//cout<<endl;
		}
		cout<<t<<" ";int blue=0,red=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(blue==1 && red==1)
				{	
					cout<<"Both"<<endl;
					break;
				}
				if(arr[i][j]==lasthor)
				{	
					counthor++;
				}
				if(arr[i][j]!=lasthor)
				{
					counthor=1;lasthor=arr[i][j];
				}
				if(counthor==k && lasthor!='.')
				{
					cout<<lasthor<<endl;
					if(lasthor=='B') 
						blue=1;
					else
						red=1;
				}
				if(arr[j][i]==lastver)
					countver++;
				if(arr[j][i]!=lastver)
				{
					countver=1;
					lastver=arr[j][i];
				}
				if(countver==k && lastver!='.'){
					cout<<lastver<<endl;
					if(lasthor=='B')
						blue=1;
					else
						red=1;
					}
			}
		}
	}
	return 0;
}
