#include<iostream>
#include<queue>

using namespace std;

int main()
{
	priority_queue<int> q;
	q.push(12);
	q.push(10);
	q.push(11);
	while(q.size()!=0)
	{
		cout<<q.top()<<" ";
		q.pop();
	}
	return 0;
}
