//Greplin programming challenge
#include<iostream>

using namespace std;

int testpal(string str,int i,int j)
{
	int len=j-i+1;
	while(i<j)
	{
		if(str[i++]!=str[j--])
			return 0;
	}
	return len;
}

int main()
{
	string str;int k=0;string palstr;
	cin>>str;
	for(int i=0;i<str.length();i++)
	{
		for(int j=i+1;j<str.length();j++)
		{
			if(k<testpal(str,i,j))
			{
				k=testpal(str,i,j);
				palstr=str.substr(i,k);
			}
		}
	}
	cout<<palstr<<endl;
	return 0;
}

