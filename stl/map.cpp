#include<iostream>
#include<map>
#include<stack>

using namespace std;

int main()
{
    map<char,int> m;
    m['a']=97;
    m['b']=98;
    m['c']=99;
    m[' ']=0;
    stack<string> s;
    s.push("Shikhar");
    s.push("Kohli");
    cout<<s.top()<<endl;
    cout<<m['a'];
    string name="Shikhar";name+=" Kohli";
    cout<<name.length()<<endl;
    for(map<char,int>::iterator i=m.begin();i!=m.end();i++)
	    cout<<i->first<<" : "<<i->second<<endl;
    cout<<"-------"<<m['e']<<endl;
    return 0;
}
