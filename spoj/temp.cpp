#include<iostream>

using namespace std;

int main()
{
	string str="Shikhar Kohli";int len=str.length();
	for(int i=0;i<str.length();i++)
	{
		cout<<str[(10+i)%len];
	}
	cout<<endl;
}
