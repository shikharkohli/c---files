#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	int arr[100];
	memset(arr,1,sizeof(arr));
	for(int i=0;i<100;i++)
		cout<<arr[i]<<endl;
	return 0;
}
