#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main()
{
	int n;int test=0;
	int arr[100000];
	while(1)
	{
		scanf("%d",&n);
		if(n==0)
			break;
		memset(arr,0,sizeof(arr));
		//cout<<n<<endl;
		for(int i=0;i<n;i++)
			scanf("%d",&arr[i]);
		for(int i=0;i<n;i++)
		{
			if((i+1)!=arr[arr[i]-1])
			{
				printf("not ambiguous\n");
				test=1;
				break;
			}
		}
		if(test!=1)
			printf("ambiguous\n");
		test=0;
	}
	return 0;
}
