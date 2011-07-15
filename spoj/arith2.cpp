#include<iostream>
#include<cctype>
#include<cstring>

using namespace std;

int main()
{
	char str[100000];
	int t,flag=0;long long int temp1,temp2;
	cin>>t;int len,k;
	long long int numarr[100000];
	while(t--)
	{
		
		cin.getline(str,100000,'=');
		len=strlen(str);
		temp1=0;temp2=0;k=0;
		memset(numarr,0,sizeof(numarr));
		for(int i=0;i<len;i++)
		{	
			if(isdigit(str[i]))
			{
				while(isdigit(str[i])){
				temp1*=10;
				temp1+=str[i]-'0';i++;
				}
				numarr[k++]=temp1;
				//cout<<temp1<<endl;
				temp1=0;
				
			}
			//cout<<numarr[k-1]<<" ";
		}
		temp1=0;
		for(int i=0;i<len;i++)
		{
			switch(str[i])
			{
				case '+' : numarr[temp1+1]=numarr[temp1]+numarr[temp1+1];
							temp1++;
							break;
				case '*' : numarr[temp1+1]=numarr[temp1]*numarr[temp1+1];
							temp1++;break;
				case '-' : numarr[temp1+1]=numarr[temp1]-numarr[temp1+1];temp1++;
							break;
				case '/' : numarr[temp1+1]=numarr[temp1]/numarr[temp1+1];temp1++;
							break;
			}
		}
		cout<<numarr[k-1]<<endl;

	
	}
	return 0;
}


