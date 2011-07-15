#include<iostream>
//#include<algorithm>

using namespace std;

int main()
{
	int a=10,b=11,c=12;
	cout<<a<<","<<b<<endl;
	swap(a,b);
	cout<<a<<","<<b<<endl;
	cout<<min(a,b,c)<<","<<max(a,b)<<endl;
	return 0;
}	
