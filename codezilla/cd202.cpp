#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

int main()
{
	char temp[100];
	gets(temp);
	string output;int k=0;
	for(int i=0;i<strlen(temp);i++)
	{
		if(temp[i]=='a' || temp[i]=='e' || temp[i]=='i' || temp[i]=='o' || temp[i]=='u')
		{
			cout<<temp[i];//output[k]=temp[i];
			i+=2;
		}
		else
		{
			cout<<temp[i];
		//output[k++]=temp[i];
		}
	}
	return 0;
}
