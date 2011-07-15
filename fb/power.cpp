#include<iostream>

using namespace std;

int main()
{
	long long int g,w,m;
	cin>>g>>w>>m;
	int temp=0;int maxw=0;
	for(long long int i=1;i<=m/g;i++)
		for(long long int j=1;j<=m/w;j++)
		{
			if(g*i+w*j>temp){
				temp=g*i+w*j;if(w>maxw) maxw=w;}
				cout<<"("<<temp<<","<<maxw<<")--";
		}
	cout<<w<<endl;
	return 0;
}
