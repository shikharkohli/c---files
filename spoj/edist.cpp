#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

int dp[2001][2001];

int main()
{
    char A[2001],B[2001];
    int t;int lena,lenb;
    scanf("%d",&t);
    while(t--) {
        scanf("%s",A);
        scanf("%s",B);
        memset(dp,0,sizeof(dp));
        lena=strlen(A);
        lenb=strlen(B);
        for(int i=0;i<=lenb;i++)
            dp[0][i]=i;
        for(int i=0;i<=lena;i++)
            dp[i][0]=i;
        for(int i=1;i<=lena;i++) {
            for(int j=1;j<=lenb;j++) {
                if(A[i-1]==B[j-1])
                    dp[i][j]=dp[i-1][j-1];
                else
                    dp[i][j]=min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]))+1;
 //               cout<<dp[i][j]<<" ";
            }
   //         cout<<endl;
        }
        printf("%d\n",dp[lena][lenb]);
    }
    return 0;
}

