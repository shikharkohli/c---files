#include<iostream>
#include<cstring>
#include<map>

using namespace std;

void brackets(char str[10],int start,int end)
{
	if((start-end)==-1 || start==end || (end-start)==-1)
	//if(start==end)
	{
		cout<<str<<", ("<<start<<","<<end<<")"<<endl;
		return;
	}
	str[start]='(';
	for(int i=start+1;i<end;i++)
		str[i]='-';
	str[end]=')';
	for(int i=start+1;i<end;i++)
	{
		//cout<<"First half ("<<start<<","<<i<<")"<<endl;
		//cout<<"Second half("<<i+1<<","<<end<<")"<<endl;
		brackets(str,start,i);
		brackets(str,i,end);
		//str[end]=' ';
	}
}

int main()
{
    char str[10];
    strcpy(str,"------");
    brackets(str,0,strlen(str)-1);
    return 1;
}
