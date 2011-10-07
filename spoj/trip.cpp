#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cassert>

using namespace std;

int dp[100][100];

string arr[1000];

void printlcs(char[],int,char[],int,int,int,char[]);

int dp_matrix(char alice[90],int lena,char bob[90],int lenb)
{
    cout<<"DPing..."<<endl;
    //int dp[2001][2001];
    memset(dp,0,sizeof(dp));
    for(int i=1;i<=lena;i++) {
        for(int j=1;j<=lenb;j++) {
            if(alice[i-1]==bob[j-1])
                dp[i][j]=dp[i-1][j-1]+1;
            else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
           }
    }
    int maxi=dp[0][0];
    for(int i=0;i<=lena;i++){
        for(int j=0;j<=lenb;j++){
            cout<<dp[i][j]<<" ";
            if(dp[i][j]>maxi)
                maxi=dp[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<=lena;i++)
        for(int j=0;j<=lenb;j++)
        {
            if(dp[i][j]==maxi) {
        /*        string temp="";
                int x=i,y=j;
                while(x>0 && y>0) {
                    if((x>0 && y>0) && dp[x-1][y-1]+1==dp[x][y]){
                            temp=" "+temp;
                            temp[0]=(alice[x]);
                            x--;y--;
                    }
                    else if((x>0 && y>0) && dp[x-1][y]==dp[x][y]){
                        x--;
                    }
                    else if((x>0 && y>0) && dp[x][y-1]==dp[x][y]){
                        y--;
                    }
                }
                cout<<temp<<endl;
            }
            */
            char temp[1000]="";
            printlcs(alice,lena,bob,lenb,i,j,temp);
        }
    } 
    return maxi;
}

void printlcs(char alice[90],int lena,char bob[90],int lenb,int i,int j,char temp[1000])//string temp)
{
    if(i==0 || j==0) {
        //cout<<"--"<<temp<<endl;
        printf("--%s\n",temp);
        return;
    }
    else
    {
        if(dp[i-1][j]==dp[i][j]) {
            printlcs(alice,lena,bob,lenb,i-1,j,temp);
        }
        if(dp[i][j-1]==dp[i][j]) {
            printf(alice,lena,bob,lenb,i,j-1,temp);
        }
        if(dp[i-1][j-1]+1==dp[i][j]) {
            char temp1[1001]=" ";
            strcat(temp1,temp);
            //assert(alice[i+1]==bob[j+1]);
            temp1[0]=alice[i-1];
            //strcpy(temp,temp1);
            printlcs(alice,lena,bob,lenb,i-1,j-1,temp1);
        }

    }
}   

int main()
{
    freopen("input.txt","r",stdin);
    int t;
    char alice[90],bob[90];
    int lena,lenb;
    scanf("%d",&t);
    while(t--)
    {
        int i;
        scanf("%s",alice);
        lena=strlen(alice);
        scanf("%s",bob);
        lenb=strlen(bob);
        int temp = dp_matrix(alice,lena,bob,lenb);
        //    if(maxi<temp)
        //        maxi=temp;
                
        //}
        //cout<<maxi<<endl;
    }
    return 0;
}
