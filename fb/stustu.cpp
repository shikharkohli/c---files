#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int num;
		scanf("%d",&num);
		vector<string> words;
		while(num--)
		{
			string temp;
			cin>>temp;
			words.push_back(temp);
		}
		sort(words.begin(),words.end());
		for(int i=0;i<words.size();i++)
		{
			int j;
			for(j=i+1;v[j][0]==v[i][0];j++);
			j--;
			if(i==j)
				continue;
			for(int k=1;k<10;k++)
			{
				for(int x=i;x<=j;x++)
				{
					if(k>=words[i].length())
						{swap(words[i],words[i+1]);continue;}
					if(k>=words[i+1].length())
						{swap(words[i],words[i+1]);continue;}

					if(words[i][k]>words[i+1][k])
					{
						swap(words[i],words[i+1]);
					}

				}
			}
		for(vector<string>::iterator i=words.begin();i!=words.end();i++)
			cout<<*i<<endl;
		cout<<endl;
	}
	return 0;
}
