#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack<int> s;
    s.push(10);
    s.push(11);
    s.push(12);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<","<<s.size()<<endl;
    return 0;
}
