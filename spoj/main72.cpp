#include<iostream>
#include<set>
#include<cstdio>

using namespace std;

int totsum=0;
set<int> s;

void sumofsubsets(int arr[],int n,int k,int sum)
{
    if(k==n) {
        if(s.find(sum)==s.end()) {
            totsum+=sum;
            s.insert(sum);
        }
        return;
    }
    for(int i=k;i<n;i++) {
        if(s.find(sum+arr[i])==s.end()) {
            totsum+=sum+arr[i];
            s.insert(sum+arr[i]);
        }
        sumofsubsets(arr,n,i+1,sum+arr[i]);
    }
}

short int dp[100][100*1000+1];

void filldp(int arr[],int n)
{
    int min=arr[0];
    int max=0;
    for(int i=0;i<n;i++)
        max+=arr[i];
    for(int i=min;i<=max;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j==0 && i==arr[j])
                    dp[j][arr[j]]=1;
            else {


int main()
{
    int t,n;
    int arr[101];
    scanf("%d",&t);
    while(t--) {
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d",arr+i);printf("%d ",arr[i]);}
        memset(dp,0,sizeof(dp));
        sort(arr,arr+n);
        //sumofsubsets(arr,n,0,0);
        printf("%d\n",totsum);
        totsum=0;
    }
    return 0;
}
