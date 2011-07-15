#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>

using namespace std;

vector<long long int> dp;

int main()
{
    long long int temp=0,tempsum=0;
    dp.push_back(1);
    for(long long int i=2;i<=1000000000;i++) {
        temp = i;tempsum=0;
        while(temp>0) {
            tempsum += (i%10);
            i /= 10;
        }
        dp.push_back(tempsum+dp[i-1]);
    }
    int a,b;
    while(1) {
        scanf("%d %d",&a,&b);
        if(a==-1 && b==-1)
            return 0;
        printf("%lld\n",dp[b]-dp[a-1]);
    }
    return 0;
}
