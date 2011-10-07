//TODO
//Reduce to cases for 2 to 9, and then check which nos are happy
//Not as easy as it looks :P
#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int cases;
    scanf("%d",&cases);
    while(cases--) {
    int n;
    scanf("%d",&n);
    int t=0;int sum=0;
    while(n>=10) {
        while(n>0) 
        {
            sum += (n%10) * (n%10);
            n/=10;
        }
        n=sum;
        sum=0;
        t++;
    }
    //if(t==0)
    //    t=1;
    if(n==1 || n==7)
        printf("%d\n",t);
    else
        printf("-1\n");
    }
    return 0;
}
