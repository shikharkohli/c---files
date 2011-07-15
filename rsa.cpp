#include<iostream>
#include<cmath>

using namespace std;

int coprime(int a,int b)
{
    int i=2;
    for(;i<=a;i++)
    {
        if((a%i)==0 && (b%i)==0)
		return 0;
    }
    return 1;
}

int main()
{
    int p,q,n,phi,e,d;
    cout<<"Enter prime numbers p and q";
    cin>>p>>q;
    n=p*q;
    phi=(p-1)*(q-1);
    for(e=3;e<=phi;e++)
    {
	cout<<"e -> "<<e<<", coprime value"<<coprime(e,phi)<<endl;
	if(coprime(e,phi))
		break;
	/*int i=2;int flag=0;
	while(i<=(e) && !flag)
	{
	    if(e%i==0 && phi%i==0)
	    {i=sqrt(e)+1;flag=1;}
	    else
		    i++;
	}
	if(!flag && i==sqrt(e)+1)
	{cout<<"E is "<<e<<endl;break;}*/
    }
    cout<<"Phi "<<phi<<", e "<<e<<", n "<<n<<endl;
    int m;d=1;
    for(d=1;(d*e)%phi!=1;d++);
    
    
    cout<<"d is "<<d<<endl;
    cout<<"Enter message ";
    cin>>m;
    int c=1;
    for(int i=0;i<e;i++)
    {
	    c=(c*m)%n;
    }
    cout<<"Coded message is "<<c<<endl;int l=1;
    for(int i=0;i<d;i++)
    {
	    l=(l*c)%n;
    }
    cout<<"Message was "<<l<<endl;
    return 0;
}
