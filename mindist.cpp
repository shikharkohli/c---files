#include<iostream>

using namespace std;

int main()
{
	int x[2000],y[2000];double sumx=0.0,sumy=0.0;
	for(int i=0;i<5;i++)
	{
		sumx+=x[i];
		sumy+=y[i];
	}
	sumx/=5;sumy/=5;
	double sum=0.0;
	for(int i=0;i<5;i++)
	{
		sum+=((sumx-x[i])*(sumx-x[i])+(sumy-y[i])*(sumy-y[i]));
	}
	cout<<sum<<endl;
	return 0;
}
