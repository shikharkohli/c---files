#include<iostream>
#include<algorithm>

using namespace std;

void qsort(int arr[],int beg,int end)
{
	if(beg>=end)
		return;
	int mid=(beg+end)/2;
	int i=0,j=end-1;
	while(i<j)
	{
		while(arr[i]<arr[mid])
			i++;
		while(arr[j]>arr[mid])
			j--;
		if(i<j)
			swap(arr[i],arr[j]);
	}
	qsort(arr,beg,mid-1);
	qsort(arr,mid+1,end);
}

int main()
{
	int arr[10]={9,8,7,6,5,4,3,2,1,0};
	qsort(arr,0,10);
	for(int i=0;i<10;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	return 0;
}
