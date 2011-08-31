//TODO
#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int dp[102][102];

void filldp()
{
    for(int n=1;n<101;n++) {
        for(int k=1;k<101;k++) {
            if(n==1)
                dp[1][k]=0;
            if(n>1)
                dp[n][k]=((dp[n-1][k])+k)%n;
            //printf("%d ",dp[n][k]);
        }
        //printf("\n");
    }
}

int main()
{
    int n;
    filldp();
    while(1)
    {
        scanf("%d",&n);
        if(n==0)
            return 0;
        if(n==13) {
            printf("1\n");
        }
        else
        {
            int i;
            for(i=0;i<101;i++)
                if(dp[13][i]==n) {
                    printf("-->%d\n",i);
                    break;
                }

        }
    }
    return 0;
}

