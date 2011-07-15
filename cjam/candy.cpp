#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
	int a=3,b=5,c=6;int k=(a^~b)^b;
	cout<<"a ^ b "<<(a^b)<<endl;
	cout<<"a ^ (b^~a)"<<(a^(b^~a))<<endl;
	cout<<"b "<<b<<" b^~a "<<(b^~a)<<endl;
	return 0;
}
