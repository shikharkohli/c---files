#include<iostream>

using namespace std;

int dp[100][100];

int knapsack(int values[100],int weights[100],int num,int weight)
{
    for(int i=0;i<=num;i++) {
        for(int j=weights[0];j<=weight;j++) {
            if(i==0 || j==0)
                dp[i][j]=0;
            else{
            int k=0;
            dp[i][j] = dp[i-1][j];
            //while(k<=i) {
            //    if(j>=weights[k])
                    
                    dp[i][j] = max(dp[i][j],dp[i-1][j-weights[i]]+values[i]);
            //    k++;
            //  }
           }
        }
    }
    for(int i=0;i<=num;i++) {
        for(int j=0;j<=weight;j++) {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    return dp[num][weight];
}

int main()
{
    int v[]={1,30},w[]={1,50},num=2,weight=100;
    for(int i=0;i<10;i++) {
        for(int j=0;j<10;j++)
            cout<<dp[i][j]<<" ";
        
        cout<<endl;
    }
    cout<<knapsack(v,w,num,weight)<<endl;
    return 0;
}
