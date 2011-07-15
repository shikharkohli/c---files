#include<iostream>
#include<cstdlib>

using namespace std;

void dectobin(int n)
{
	int binno[10];
	for(int i=0;i<10;i++)
		binno[i] = 0;
	int k = 9;
	while(n >= 0 && k >= 0)
	{
		binno[k--] = n%2;
		n /= 2;
	}
	int count = 0;
	for(int i=0;i<10;i++)
	{
		if(binno[i]!=0)
			count = 1;
		if(count)
			cout<<binno[i];
	}
	cout<<endl;
}

int main(int argc,char *argv[])
{
	cout<<"Binary representation of "<<argv[1]<<" is ";
	dectobin(atoi(argv[1]));
	return 0;
}

