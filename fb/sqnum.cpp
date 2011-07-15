#include<iostream>
#include<set>

using namespace std;

int main()
{
	set<int> squares;
	for(int i=0;i<43641;i++)
		squares.insert((i)*(i));
	int t;
	cin>>t;
	while(t--)
	{
		int num;
		cin>>num;
		int score=0;
		for(set<int>::iterator i=squares.begin();i!=squares.end();i++)
		{
			if(squares.find(num-(*i))!=squares.end())
				score++;
			if(*i>num)
				break;
		}
		if(score==1) cout<<score<<endl;
		else	cout<<score/2<<endl;
	}
	return 0;
}
	
