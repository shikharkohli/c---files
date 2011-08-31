//TODO
#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int numseq(int seq[],int n,int k)
{
    int tot=0;
    for(int i=0;i<n;i++) {
        if(seq[i]<k)
            continue;
        if(seq[i]==k)
            tot+=1;
        if(seq[i]>k) {
            int temp=seq[i];
            long long int div=1;
            long long int prod=1;
            for(int i=0;i<k;i++) {
                div*=(i+1);
                prod*=temp;
                temp--;
                //prod%=5000000;
            }
            tot+=(prod/div);
            //tot/=div;
            tot%=5000000;

            

int main()
{
    int n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    int arr[10000];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int total=0;
    int seq[10000];
    memset(seq,0,sizeof(seq));
    seq[0]=1;
    for(int i=0;i<n;i++) {
        for(int j=0;j<i;j++) {
            if(arr[j]<=arr[i])
                seq[i]=max(seq[j]+1,seq[i]);
        }
    }

    return 0;
}

