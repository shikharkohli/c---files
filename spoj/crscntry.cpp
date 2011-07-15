//TODO
#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;

int dp[2001][2001];

int dp_matrix(int agnes[2001],int lena,int tom[2001],int lent)
{
    //int dp[2001][2001];
    memset(dp,0,sizeof(dp));
    for(int i=1;i<=lena;i++) {
        for(int j=1;j<=lent;j++) {
            if(agnes[i-1]==tom[j-1])
                dp[i][j]=dp[i-1][j-1]+1;
            else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
           }
    }
    int maxi=dp[0][0];
    for(int i=0;i<=lena;i++)
        for(int j=0;j<=lent;j++)
            if(dp[i][j]>maxi)
                maxi=dp[i][j];

    return maxi;
}


int main()
{
    //freopen("input.txt","r",stdin);
    int t,agnes[2001],tom[2001],lena,lent;
    scanf("%d",&t);
    while(t--)
    {
        int i;int flag=0;
        for(i=0;!flag;i++)
            {
                scanf("%d",&agnes[i]);
                if(agnes[i]==0)
                    flag=1;
     //           cout<<agnes[i];
            }
     //       cout<<endl;
        lena=i;int maxi=-1;
        while(1){
            flag = 0; 
            for(i=0;flag!=1;i++) {

                scanf("%d",&tom[i]);
                if(tom[i]==0)
                    flag=1;
       //             cout<<tom[i]<<" ";
            }
      //      cout<<endl;
            if(i==1)
                break;
            else
                lent=i;
            int temp = dp_matrix(agnes,lena-1,tom,lent-1);
            if(maxi<temp)
                maxi=temp;
                
        }
        cout<<maxi<<endl;
    }
    return 0;
}
