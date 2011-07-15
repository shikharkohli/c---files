//cscan algorithm
//disk head is moving towards the end of the disk

#include<iostream>

using namespace std;

int main()
{
	int list[200],tot,n,curr;
	cout<<"Enter the total number of disk cylinders ";
	cin>>tot;
	cout<<"Enter the total number of cylinders to be accessed ";
	cin>>n;
	cout<<"Enter the current position of the disk head ";
	cin>>curr;
	int temp;
	for(int i=0;i<tot;i++)
		list[i]=-1;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter cylinder number "<<i+1;
		cin>>temp;
		list[temp]=1;
	}
	for(int i=curr+1;i!=curr;)
	{
		if(list[i]==1)
			cout<<i<<" ";
		i=(i+1)%tot;
	}
	return 0;
}
