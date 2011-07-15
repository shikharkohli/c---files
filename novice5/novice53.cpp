#include<iostream>
#include<vector>

using namespace std;

vector<int> square;

char winner[][7]={"Aayush","Akash"};


void gametree(int orig,int n,int p)
{
	if(n==0)
	{
		cout<<orig<<"--->>"<<winner[p]<<endl;
	}
	for(int i=0;square[i]<=n;i++)
		gametree(orig,n-square[i],(p+1)%2);
}

int main()
{
	for(int i=2;i*i<100000;i++)
		square.push_back(i*i);
	gametree(4,4,0);
	return 0;
}
	
		
