#include<iostream>

using namespace std;

class page
{
	int number;
	int size;
	public:
	int i;
	page()
	{
		static int i=10;
		i+=1;
	}
	int reti()
	{
		return i;
	}
};

int main()
{
	page p;
	cout<<p.reti()<<endl;
	return 0;
}

