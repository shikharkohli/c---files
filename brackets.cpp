#include<iostream>
#include<cstring>

using namespace std;

void print(char str[])
{
	int k=1;
	for(int i=0;i<strlen(str);i++)
	{
	    if(i!=strlen(str)-1)
	    {   if(str[i]=='(')
	        cout<<str[i]<<"x"<<k++<<".";
		if(str[i]==')')
		cout<<".x"<<k++<<str[i];
	    }
	 }
	cout<<".x"<<k++<<str[strlen(str)-1];
}

void bracket(char str[10],int start,int end)
{
    if(start==end)
    {
	    cout<<str<<"("<<start<<","<<end<<")"<<endl;
	    return;
    }
    else
    {
	str[start]='(';
	str[end]=')';
	for(int i=start+1;i<end;i++)
	{
		bracket(str,start,i);
		bracket(str,i+1,end-1);
	}
    }
}

int main()
{
	//print("(()())");
	char str[]="    ";
	bracket(str,0,strlen(str)-1);
	return 0;
}
    
