#include<cstdio>
#include<iostream>

using namespace std;

int gcd(int a,int b)
{
    if(a % b == 0)
         return b;
    else
        gcd(b,a%b);
}

int main()
{
    long long int tree[100000];
    long long int dist[100000];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%lld",tree+i);
    }
    for(int i=0;i<n-1;i++)
        dist[i]=tree[i+1]-tree[i];
    int curr=gcd(dist[0],dist[1]);
    for(int i=2;i<n-2;i++)
        curr = gcd(dist[i],curr);
    int sum=0;
    for(int i=0;i<n-1;i++)
        sum += (dist[i]/curr) - 1;
    cout<<sum<<endl;
    return 0;
}

