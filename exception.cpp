#include<iostream>
#include<stack>

using namespace std;

int main()
{
    try
    {
       cout<<"In the try block"<<endl;
       int i=100;
       //throw i;
       cout<<"Thrown!"<<endl;
    }
    catch(...)
    {
       cout<<"Caught the int exception"<<endl;
    }
    stack<int> s;
    s.push(10);
    int k=s.top();
    cout<<k<<" popped";
    return 0;
}
