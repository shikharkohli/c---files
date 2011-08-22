#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>

using namespace std;

unsigned int dp[1000004];

inline int filldp(int arr[],int n,int k)
{
    dp[0]=0;
    for(int i=arr[0];i<=n+1;i+=1)
    {
        for(int j=0;j<k;j++)
        {
            if(dp[i]+arr[j]>=n)
                dp[i]=min(dp[i],dp[i-arr[j]]+1);
        }
        if(dp[i]==10000000)
            dp[i]=dp[i-1];
    }
}

void greedy(int arr[],int n,int k)
{
    int pos=k-1;
    int temp=n,count=0;
    while(pos>=0 && n>0) {
        n-=arr[pos];
        pos--;
        count++;
    }
    if(n>0)
        printf("impossible\n");
    else
        printf("%d\n",count);
    //return count;
}


int main()
{
    int t;
    int n,k;
    int arr[1000];
    scanf("%d",&t);
    int temp=t;
    while(t--) {
        scanf("%d%d",&n,&k);
        for(int i=0;i<=n;i++)
            dp[i]=10000000;
        for(int i=0;i<k;i++)
            scanf("%d",&arr[i]);
        sort(arr,arr+k);
        printf("Scenario #%d:\n",temp-t);
        greedy(arr,n,k);
    }
    return 0;
}
