#include<iostream>
#include<string.h>

using namespace std;

int substr(char str1[],char str2[])
{
	for(int i=0;i<(strlen(str1)-strlen(str2));i++)
	{
		if(str1[i]==str2[0])
		{
			int k=0;
			while(str1[i+k]==str2[k])
				k++;
			if(k==strlen(str2)-1)
				return 1;
		}
	}
	return 0;
}

int main()
{
	if(substr("abbcd","bcd"))
	cout<<"Substring found"<<endl;
	else
		cout<<"No substring found"<<endl;
}
