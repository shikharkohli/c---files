#include<iostream>

using namespace std;

int totalsum(int n,int &sum)
{

}

int main()
{
	int i = 0,n;
	do
	{
		cin>>n;
		i = 0;
		totalsum(n,i);
		cout<<i;
	}while(n!=EOF);
	return 0;
}
