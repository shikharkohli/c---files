//Print not completely working
#include<iostream>
#include<cstring>

using namespace std;

struct trienode
{
	char ch;
	int prefix;
	trienode *next[26];
};

class trie
{
	trienode *ROOT;
	public:
	trie()
	{
		ROOT=new trienode;
		ROOT->ch='_';
		ROOT->prefix=0;
		memset(ROOT->next,0,sizeof(ROOT->next));
	}
	void insertword(string,int,trienode *);
	void findword(string word);
	void findpref(string word);
	void print(trienode *);
};

void trie::print(trienode *curr=NULL)
{
	if(curr==NULL)
		curr=this->ROOT;
	if(curr->prefix==0)
		cout<<endl;
	if(curr!=ROOT) 
		cout<<curr->ch;
	for(int i=0;i<26;i++)
	{
		if(curr->next[i]!=NULL)
			print(curr->next[i]);
	}
}
	

void trie::insertword(string word,int k=0,trienode *curr=NULL)
{
	if(k>=word.length())	
		return;
	if(k==0)
		curr=this->ROOT;
	(curr->prefix)++;
	if(curr->next[word[k]-'a']==NULL)
	{
		trienode *temp=new trienode;
		temp->ch=word[k];
		temp->prefix=0;
		memset(temp->next,0,sizeof(temp->next));
		curr->next[word[k]-'a']=temp;
	}
	else
	{
		curr->prefix+=1;
	}
	insertword(word,k+1,curr->next[word[k]-'a']);
}

void trie::findword(string word)
{
	trienode *temp=ROOT;
	for(int k=0;k<word.length();k++)
	{
		//cout<<temp->ch;
		if(temp->next[word[k]-'a']==NULL)
		{
			cout<<"Word not found\n";
			return;
		}
		else
		{
			temp=temp->next[word[k]-'a'];
		}
	}
	cout<<"Word found\n";
}

int main()
{
	trie T;
	T.insertword("shikhar");
	T.insertword("shikhark");
	T.findword("shikha");
	T.print();
    cout<<endl;
	return 0;
}
