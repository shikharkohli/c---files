#include<iostream>
#define max 0x7fffffff

using namespace std;

int main()
{
	int a=max,b=max,c=max;
	int of=(a&b) | (b&c) | (c&a);
	cout<<of<<","<<a<<endl;
	return 0;
}
