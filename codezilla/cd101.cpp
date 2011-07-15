#include<iostream>

using namespace std;

int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	int k=max(b-a,c-b);
	cout<<k-1<<endl;
	return 0;
}
