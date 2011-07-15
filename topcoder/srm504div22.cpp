#include<iostream>
#include<stack>
#include<queue>

using namespace std;

/*int countBlack(string ballSequence,int repetitions)
{
	stack<char> s,tempstack;
	queue<char> temp;int count=0;
	for(int i=0;i<ballSequence.length();i++)
		s.push(ballSequence[i]);
	while(repetitions--)
	{
		if(s.top()=='W')
		{
			s.pop();
			while(!s.empty())
			{
				temp.push(s.top());
				s.pop();
			}
			while(!temp.empty())
			{
				s.push(temp.front());
				temp.pop();
			}
			
		}
		if(s.top()=='B')
		{
			count++;
			s.pop();
			while(!s.empty())
			{
				if(s.top()=='W')
					tempstack.push('B');
				if(s.top()=='B')
					tempstack.push('W');
				s.pop();
			}
			while(!tempstack.empty())
			{
				s.push(tempstack.top());
				tempstack.pop();
			}
		}
	}
	return count;
}

int main()
{
	cout<<countBlack("BBWWB",1)<<endl;
	return 0;
}

