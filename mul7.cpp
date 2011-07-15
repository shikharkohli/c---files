//Efficient multiplication by 7
#include<iostream>
#include<cstdlib>

using namespace std;

int main(int argc,char *argv[])
{
	int x=atoi(argv[argc-1]);
	x=(x<<3)-x;
	cout<<x<<endl;
	return 0;
}
