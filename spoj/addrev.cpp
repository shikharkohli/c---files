#include<iostream>
#include<cstdio>

using namespace std;

long long int rev(long long int num)
{
    long long int temp=0;
    while(num>0) {
        temp=temp*10+num%10;
        num/=10;
    }
    return temp;
}

int main()
{
    int t;
    long long int a,b;
    scanf("%d",&t);
    while(t--) {
        scanf("%lld%lld",&a,&b);
        printf("%lld\n",rev(rev(a)+rev(b)));
    }
    return 0;
}
