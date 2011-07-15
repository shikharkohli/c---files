#include<iostream>
#include<set>

using namespace std;

int main()
{
	multiset<int> m;
	m.insert(11);
	m.insert(12);
	m.insert(11);
	m.erase(11);
	for(multiset<int>::iterator i=m.begin();i!=m.end();i++)
		cout<<*i<<endl;
	return 0;
}
