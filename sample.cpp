#include<iostream>
#include<cstdio>
#define MAX 0xfffffffff

using namespace std;

int main()
{
	/*
	//float b=1.1111111;
	//if(b>1.1) cout<<b<<endl;
	int x=1;
	x=++x;
	cout<<__LINE__<<","<<__FILE__<<endl;
	//printf("Goodbye") && printf("Cruel") || printf("World");
	long int max=0x7fffffffff;
	cout<<sizeof(long long int)<<endl;
	//print("%x\n",MAX);*/
	printf("%d\n",printf("%d %d",2,2) & printf("%d %d",2,2));
	printf("%d",3%2);
	return 0;
}
