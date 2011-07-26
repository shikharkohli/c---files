#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
    int t,a,b,x,y,time,flag=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&a,&b);
        x=min(a,b);
        y=max(a,b);
        time=1;int count=0;
        while(x*time<360)
        {
