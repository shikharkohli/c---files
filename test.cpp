#include<iostream>
#include<cstdio>
#include<cctype>
#include<cstring>

using namespace std;

int main()
{
	char abc[10][10];
	int i=0;
	string abc1;
	getline(cin,abc1);
	cout<<abc<<endl;
	while(i<10)
	{
		strcpy(abc[i],"0000000000");
		gets(abc[i]);
		puts(abc[i]);cout<<endl;
		i++;
	}
	for(int i=0;i<10;i++)
	{
	    cout<<endl;
	    for(int j=0;j<10;j++)
	    {
		if(islower(abc[i][j]) || abc[i][j]==' ')
		    cout<<abc[i][j]<<"("<<i<<","<<j<<")  ";
	    }
	}
	return 0;
}
