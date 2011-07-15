#include<iostream>
#include<set>

using namespace std;

int main()
{
    set<int> s;
    s.insert(9);
    s.insert(10);
    s.insert(11);
    s.insert(12);
    //s.erase(9);
    for(set<int>::iterator i=s.begin();i!=s.end();i++)
	    cout<<*i;
    cout<<endl;
    return 0;
}
