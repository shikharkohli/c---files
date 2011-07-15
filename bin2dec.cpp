#include<iostream>
#include<stack>
#include<cstdlib>

using namespace std;

int main(int argc,char *argv[])
{
	stack<int> s;
	if(argc==1)
	{
		cout<<"Usage: ./dec2bin <integer>";
		return 0;
	}
	int num=atoi(argv[1]);
	while(num!=0)
	{
		s.push(num%2);
		num/=2;
	}
	while(!s.empty())
	{
		cout<<s.top();
		s.pop();
	}
	cout<<endl;
	return 0;
}
