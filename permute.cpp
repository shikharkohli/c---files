#include<iostream>
#include<cstring>

using namespace std;

int k=1;

void permute(char str[],int len,int start)
{
	for(int i=start;i<len;i++)
	{
		//temp=str[start],str[start]=str[i],str[i]=temp;
		swap(str[start],str[i]);
		permute(str,len,start+1);
		//temp=str[start],str[start]=str[i],str[i]=temp;
		swap(str[start],str[i]);
	}
	if(start==len)
		cout<<k++<<". "<<str<<endl;
}

int main(int argc,char *argv[])
{
	char str[100];
	strcpy(str,argv[1]);
	cout<<"Permutations of "<<str<<endl;
	permute(str,strlen(str),0);
	return 0;
}

