#include<iostream>
#include<pthread.h>

using namespace std;

void *print()
{
	for(int i=0;i<10;i++)
	{
		cout<<i+1<<" In thread"<<endl;
	}
}

int main()
{
	pthread_t t;
	pthread_create(&t,NULL,print,NULL);
	for(int i=0;i<10;i++)
		cout<<i+1<<" program"<<endl;
	pthread_join(t,NULL);
	return 0;
}
