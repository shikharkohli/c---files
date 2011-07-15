//Bitset
#include<iostream>
#include<bitset>

using namespace std;

int main()
{
	bitset<10> a;
	a.set(2);
	a.flip();
	cout<<a<<endl;
	return 0;
}
