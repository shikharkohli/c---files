//TODO Josephus Problem code
#include<cstdio>
#include<iostream>
#include<cstring>

using namespace std;

int incomplete(int line[1000],int n)
{
   int check=0;
   for(int i=0;i<n;i++)
   {
      if(line[i]==1)
	      check++;
      if(check>=2)
	      return 1;
   }
   return 0;
}

int findnext(int line[1000],int n,int lastpos)
{
    int check=1;
    int pos=lastpos;pos++;
    while(check)
    {
	    check++;
	    if(check>n)
		    return -1;
        if(line[pos]!=0)
	    return pos;
	pos=(pos+1)%n;
	if(pos==lastpos)
	   return -1;
    }
    return 0;
}

void print(int line[1000],int n)
{
    for(int i=0;i<n;i++)
   	cout<<line[i]<<"  ";
}

int main()
{
    int n=10,line[1000];
    for(int i=0;i<n;i++)
       line[i]=1;
    memset(line,1,sizeof(line));
    int del=0;int lastpos=0,k;
    while(incomplete(line,n))
    {
        print(line,n);cout<<endl;
	int k=findnext(line,n,lastpos);//if(k==-1) return 0;
	if(del==1) {line[k]=0;del=0;}
	else
		del=1;
	//cout<<complete(line,n)<<endl;
	lastpos=k;
    }
    cout<<"over";
    return 0;
}
