//Huffman encoder
#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>
#include<map>

using namespace std;

map<char,string> codes;

struct node
{
	string str;
	int freq;
	node *left;
	node *right;
};

class Compare
{
	public:
	bool operator()(node,node);

};

bool Compare::operator()(node a,node b)
{
	if(a.freq<b.freq)
		return false;
	else
		return true;
}

void dispcode(node root,string str)
{
	if(root.left==NULL && root.right==NULL)
	{
		//cout<<root.str<<" "<<str<<endl;
		codes[root.str[0]]=str;
		return;
	}
	else
	{
		//node *temp1=new node;*temp1=
		dispcode(*(root.left),str+"0");
		dispcode(*(root.right),str+"1");
	}
}


int main()
{
	priority_queue<node,vector<node>,Compare> huffman;
	string str;
	cout<<"Input string ";
	cin>>str;
	map<char,int> freq;
	for(int i=0;i<str.length();i++)
			freq[str[i]]++;
	cout<<"Character       frequency"<<endl;
	for(map<char,int>::iterator it=freq.begin();it!=freq.end();it++)
	{
		node *temp=new node;
		temp->str="";
		temp->str+=it->first;
		temp->freq=it->second;
		cout<<"      "<<temp->str<<"            "<<temp->freq<<endl;
		temp->left=temp->right=NULL;
		huffman.push(*temp);
	}
	while(huffman.size()!=1)
	{
		node *temp1=new node;
		*temp1=huffman.top();huffman.pop();
		node *temp2=new node;
		*temp2=huffman.top();huffman.pop();
		node *temp3=new node;
		temp3->str=temp1->str+temp2->str;
		temp3->freq=temp1->freq+temp2->freq;
		temp3->right=((temp1->freq)>(temp2->freq))?temp1:temp2;
		temp3->left=((temp1->freq)>temp2->freq)?temp2:temp1;
		huffman.push(*temp3);
	}
	dispcode(huffman.top(),"");
	//sort(codes.begin(),codes.end());
	cout<<"Character 	Code"<<endl;
	for(map<char,string>::iterator it=codes.begin();it!=codes.end();it++)
	{
		cout<<"      "<<it->first<<"           "<<it->second<<endl;
	}
	cout<<"The encoded bit stream is \n\t";
	for(int i=0;i<str.length();i++)
	{
		cout<<codes[str[i]];
	}
	cout<<endl;
	return 0;
}

/*Output

Input string aaabbc
Character       frequency
   a            3
   b            2
   c            1
Character 	Code
   a           1
   b           01
   c           00
The encoded bit stream is 
	111010100
*/
