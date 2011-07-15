#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> v(10);
	for(int i=0;i<v.size();i++)
		v[i]=i+1;
	cout<<endl;
	//v.pop_back();
	for(vector<int>::iterator i=v.begin();i!=v.end();i++)
		cout<<*i<<" ";
	cout<<endl;
	return 0;
}
