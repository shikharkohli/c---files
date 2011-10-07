#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

int dp[100][100];
int mix[100];int totsmoke;

int filldp(int n)
{
    for(int length=2;length<=n;length++) {
        for(int i=0;i<=n-length+1;i++) {
            int j=i+length-1;
            dp[i][j]=0x0fffffff;int min_smoke=0x0fffffff;
            for(int k=i;k<j;k++) {
                //dp[i][j]=min(dp[i][j],\
                             dp[i][k]+dp[k+1][j]+mix[i-1]*mix[k]*mix[j])%100;
                if((dp[i][k]+dp[k+1][j]+mix[i-1]*mix[k]*mix[j]%100)<dp[i][j]) {
                    min_smoke=dp[i][k]+dp[k+1][j]+mix[i-1]*mix[k]*mix[j];
                    dp[i][j]=dp[i][k]+dp[k+1][j]+mix[i-1]*mix[k]*mix[j];
                    dp[i][j]%=100;
                }
            }
            totsmoke+=min_smoke;
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    return totsmoke;
}

int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--) {
        scanf("%d",&n);
        memset(dp,0,sizeof(dp));
        memset(mix,0,sizeof(mix));
        for(int i=0;i<n;i++)
            scanf("%d",&mix[i]);
        cout<<filldp(n)<<endl;
    }
    return 0;
}
