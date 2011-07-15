#include<iostream>
#include<climits>

using namespace std;

int main()
{
	double pi=1.0f;double n=1.0f;double d=2.0f;
	for(unsigned long long int i=0;i<800;i++)
	{
		pi+=(n/(((2*(i+1)+1))*d));
		n*=(2*(i+1)+1);
		d*=(2*(i+1)+2);
	}
	cout<<pi<<endl;
	return 0;
}
