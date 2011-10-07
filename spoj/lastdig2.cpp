#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	int t;
	char A[1005],B[100];int a,b;cin>>t;
	while(t--)
	{
		cin>>A>>B;
		a=A[strlen(A)-1]-'0';b=0;
		if(strlen(B)>1){b=B[strlen(B)-2]-'0';
		b*=10;}
		b+=B[strlen(B)-1]-'0';
		if(a==0 && b==0){	
			cout<<0<<endl;continue;
		}
		if(b==0 && strlen(B)==1){
			cout<<1<<endl;continue;
		}
		b%=4;
		//cout<<b<<endl;
		switch(b)
		{
			case 1:cout<<a;break;
			case 2:cout<<(a*a)%10;break;
			case 3:cout<<(a*a*a)%10;break;
			case 0:cout<<(a*a*a*a)%10;break;
		}
		cout<<endl;
	}
	return 0;
}
