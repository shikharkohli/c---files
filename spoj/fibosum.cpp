#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;

int main()
{
    int t;
    int n,m;
    vector<int> num(2);
    num[0]=0;
    num[1]=1;
    for(int i=2;i<1000000001;i++) {
        num[i].push_back((num[i-1]+num[i-2])%1000000007);
    }
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&m);
        int sum=0;
        for(long long int i=n;i<=m;i++) {
            sum+=num[i];
            sum%=1000000007;
        }
        printf("%d\n",sum);
    }
    return 0;
}
