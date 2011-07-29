#include<iostream>
#include<stack>

using namespace std;

stack<int> s1,s2;

void front()//stack<int> s1,stack<int> s2)
{
    while(!s1.empty()) {
        s2.push(s1.top());s1.pop();
    }
    cout<<s2.top()<<endl;
    while(!s2.empty()) {
        s1.push(s2.top());s2.pop();
    }
}

void insert(int val)//stack<int> s1,int val)
{
    s1.push(val);
}

void del()//stack<int> s1,stack<int> s2)
{
    while(!s1.empty()) {
        s2.push(s1.top());s1.pop();
    }
    cout<<s2.top()<<" deleted"<<endl;
    s2.pop();
    while(!s1.empty()) {
        s2.push(s1.top());
        s1.pop();
    }
}

int main()
{
  //  stack<int> s1,s2;
    insert(1);   
    insert(2);      
    insert(3);      
    insert(4);      
    insert(5);      
    insert(6);      
    insert(7);      
    insert(8);      
    insert(9);
    front();
    del();
    front();
    return 100;
}
