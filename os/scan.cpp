//scan algo
//assuming that the disk head is moving towards the end of the disk
#include<iostream>

using namespace std;

int main()
{
	int n,tot;
	int list[200];
	
	cout<<"Enter the total number of disk cylinders ";
	cin>>tot;
	cout<<"Enter the number of cylinders to be accessed ";
	cin>>n;
	int curr;
	cout<<"Enter current position of the disk head ";
	cin>>curr;
	for(int i=0;i<tot;i++)
		list[i]=-1;
	for(int i=0;i<n;i++)
	{
		int temp;
		cout<<"Enter cylinder number "<<i+1<<" ";
		cin>>temp;
		list[temp]=1;
	}
	for(int i=curr;i<tot;i++)
		if(list[i]==1)
			cout<<i<<"  ";
	for(int i=0;i<=curr;i++)
		if(list[i]==1)
			cout<<i<<"  ";
	
	return 0;
}
		
	
