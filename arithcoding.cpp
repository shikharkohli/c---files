#include<iostream>
#include<map>
#include<cctype>
#include<cstring>
#include<cstdio>
#include<vector>
#include<algorithm>
#define MAX 26

struct chp
{
	char ch;
	double p;
};

using namespace std;

bool sortfunc(chp one,chp two)
{
	return (one.p>two.p);
}

int main()
{
	int n=0;
	char str[1000];
	cout<<"Enter string ";
	gets(str);
	chp chars[MAX];
	memset(chars,0,sizeof(chars));
	for(int i=0;i<strlen(str);i++)
	{
		str[i]=toupper(str[i]);
		chars[str[i]-'A'].ch=str[i];
		chars[str[i]-'A'].p+=1.0;
	}
	vector<chp> symboltable;
	chp temp;
	for(int i=0;i<MAX;i++)
	{
		if(isalpha(chars[i].ch))
		{
			symboltable.push_back(chars[i]);
		}
	}
	//for(int i=0;i<MAX;i++)
	//	cout<<chars[i].ch<<"  "<<chars[i].p<<endl;
	cout<<"----------"<<endl;
	sort(symboltable.begin(),symboltable.end(),sortfunc);
	double prevsum=0.0;
	vector<double> graph_line;
	map<char,double> p;
	map<char,int> loc;
	for(int i=0;i<symboltable.size();i++)
	{
		loc[symboltable[i].ch]=i;
		symboltable[i].p/=strlen(str);
		p[symboltable[i].ch]=symboltable[i].p;
		temp.ch=symboltable[i].ch;
		temp.p=symboltable[i].p;
		graph_line.push_back(symboltable[i].p);
		if(i!=0)	graph_line[i]+=graph_line[i-1];
		//prevsum+=symboltable[i].p;
		cout<<symboltable[i].ch<<" "<<symboltable[i].p<<endl;
		//cout<<graph_line[i].ch<<" "<<graph_line[i].p<<endl;
	}
	double lbound=0.0,ubound=0.0,prevlbound=0.0;
	for(int i=0;i<strlen(str)-1;i++)
	{
		ubound=graph_line[loc[str[i]]];
		if(loc[str[i]]==0)
			lbound=prevlbound;
		else
			lbound=graph_line[loc[str[i]-1]];
		cout<<"("<<lbound<<","<<ubound<<")"<<endl;
		for(int k=0;k<graph_line.size();k++)
		{
			if(k==0)
			{
				graph_line[k]=(ubound-lbound)*symboltable[k].p;
			}
			else
				graph_line[k]=(ubound-lbound)*symboltable[k].p + symboltable[k-1].p;
				cout<<"\t --> "<<graph_line[k]<<endl;
		}
		prevlbound=lbound;
		cout<<"------"<<endl;
	}
	cout<<graph_line[loc[str[strlen(str)-1]]];

	return 0;
}
