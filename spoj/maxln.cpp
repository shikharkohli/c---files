#include<cstdio>

int main()
{
    int t;
    long long int r;
    scanf("%d",&t);int temp=t;
    while(t--) {
        scanf("%lld",&r);
        printf("Case %d: %lld.25\n",temp-t,(r*r)<<2);
    }
    return 0;
}
