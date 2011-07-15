//TODO
#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;

int dp[90][90];

char * strrev(char a[])
{
    int i = 0, j = strlen(a)-1;
    while(i<j)
        swap(a[i++],a[j--]);
    return a;
}

int main()
{
    memset(dp,0,sizeof(dp));
    int t,lena,lenb,k=0;
    scanf("%d",&t);
    char a[90],b[90],tempstr[90];
    char list[1000][90];
    while(t--)
    {
        memset(dp,0,sizeof(dp));
        scanf("%s",a);
        scanf("%s",b);
        lena=strlen(a);
        lenb=strlen(b);
        int maxi=0,count=0;
        for(int i=1;i<=strlen(a);i++) {
            for(int j=1;j<=strlen(a);j++) {
                if(a[i-1]==b[j-1]) {
                    dp[i][j]=dp[i-1][j-1]+1;
                }
                else {
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
                if(dp[i-1][j-1]>maxi){
                    maxi=dp[i-1][j-1];}
            }
        }
        //cout<<count<<endl;
        k=0;
        for(int i=1;i<=lena;i++) {
            for(int j=1;j<=lenb;j++) {
                if(dp[i][j]==maxi) {
                    count++;
                    int x = i,y = j;
                    while(k!=maxi && (x>=0 && y>=0)) {
                    
                        while(dp[x][y]!=(dp[x-1][y-1]+1)) {
                            y--;
                        }
                        tempstr[k++] = a[x--];
                    }
                    tempstr[k]='\0';
                    printf("%s\n",strrev(a));
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}

