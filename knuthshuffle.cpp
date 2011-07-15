//Knuth shuffle
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10,11};
	srand(time(NULL));
	for(int i=11;i>0;i--)
	{
		int j=rand()%(i);
		swap(arr[i-1],arr[j]);
	}
	for(int i=0;i<10;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	return 0;
}
