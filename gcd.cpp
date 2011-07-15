#include<iostream>
#include<stdlib.h>

using namespace std;

void gcd(int num1,int num2)
{
	if(num2%num1==0)
	{
		cout<<"GCD is "<<num1<<"______"<<num2%num1<<endl;
	}
	else
	{
		int temp=num2%num1;//cout<<"Remainder is "<<temp<<endl;
		gcd(temp,num1);
	}
}

int main(int argc,char *argv[])
{
	cout<<"The number of numbers "<<argc<<endl;
	int temp1=atoi(argv[1]);
	int temp2=atoi(argv[2]);
	gcd(temp1,temp2);
	return 0;
}
