//Make set from string of numbers
#include<iostream>
#include<set>
#include<algorithm>
#include<cstring>

using namespace std;

set<int> makeset(string str)
{
	set<int> s;
	for(int i=0;i<str.length();i++)
	{
		if(i==0 || str[i]==' ')
		{
			int k=i+1;
			while(k!=str.length() && str[k]!=' ')
				k++;
			int num=0;
			if(str[i]==' ') i+=1;
			for(int j=i;j<k;j++)
			{	
				num *= 10;//cout<<"\t "<<str[j]<<endl;
				num += (str[j]-'0');}
			i=k-1;
			cout<<num<<endl;
			s.insert(num);
		}
	}
	return s;
}

int main()
{
	set<int> myset;
	myset=makeset("10 11 10");
	for(set<int>::iterator i=myset.begin();i!=myset.end();i++)
		cout<<*i<<" ";
	cout<<endl;
	return 0;
}
