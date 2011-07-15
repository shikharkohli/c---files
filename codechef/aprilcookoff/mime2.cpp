#include<iostream>
#include<map>
#include<set>

using namespace std;

int main()
{
	set<string> type;
	map<string,string> linkage;
	int n,q;
	cin>>n>>q;
	string str1,str2;
	while(n--)
	{
		cin>>str1;
		cin>>str2;
		linkage[str1]=str2;
		type.insert(str1);
	}
	while(q--)
	{
		cin>>str1;
		int k=0;
		int i;
		/*for(i=str1.length()-1;str1[i]!='.';i--);
		for(;i<str1.length();i++)
		{
			str3[k++]=str1[i];
		}
		cout<<"-->"<<str3<<endl;*/
		if(str1.rfind('.')==str1.npos)
		{
			cout<<"unknown"<<endl;
			continue;
		}
		str2=str1.substr(str1.rfind('.')+1,str1.length());
		//cout<<str2<<endl;
		if(type.find(str2)!=type.end())
		{
			cout<<linkage[str2]<<endl;
		}
		else
			cout<<"unknown"<<endl;
	}
	return 0;
}

