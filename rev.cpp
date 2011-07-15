#include<iostream>
#include<stack>
#include<cctype>
#include<cstdio>
#include<cstring>

using namespace std;

int main()
{
	char sentence[100];
	gets(sentence);
	stack<char> s1;
	for(int i=0;i<strlen(sentence);i++)
	{	
		if(isalpha(sentence[i]))
		{
			while(isalpha(sentence[i]))
			{
				s1.push(sentence[i++]);
			}
			while(s1.size())
			{	
				cout<<s1.top();
				s1.pop();
			}
			i--;
		}
		else
			cout<<sentence[i];
	}
	cout<<endl;
	return 0;
}

