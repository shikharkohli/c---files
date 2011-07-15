#include<iostream>
#include<queue>

using namespace std;

int main()
{
   queue<int> q;
   q.push(10);
   q.push(12);
   q.push(14);
   q.push(16);
   //q.pop();
   cout<<q.front()<<" and queue  size is "<<q.size()<<endl;
   return 0;
}
