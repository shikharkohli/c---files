#include<cstdio>
#include<iostream>

using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		string str1,str2;cin>>str1>>str2;
		int i=0,count=0;
		while(i<str1.length() && i<str2.length())
		{
			if(str1[i]==str2[i])
				count++;
			i++;
		}
		printf("%d\n",count);
	}
	return 0;
}
