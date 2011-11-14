#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

//unsigned int memo[15][15];
unsigned int maxsum;

void path(int tri[15][15],int x,int y,int sum=0)
{
    if(x==15)
    {    
        if(sum>maxsum)
            maxsum = sum;
        return;
    }
    path(tri,x+1,y,sum+tri[x][y]);
    path(tri,x+1,y+1,sum+tri[x][y]);
    /*if(sum>memo[x][y]) {
        memo[x][y] = sum;
        path(tri,x+1,y,sum+tri[x][y]);
        path(tri,x+1,y+1,sum+tri[x][y]);
    }
    else
        return;
        */
}

int main()
{
    freopen("input.txt","r",stdin);
    int tri[15][15];
    for(int i=0;i<15;i++) {
        for(int j=0;j<=i;j++) {
            scanf("%d",&tri[i][j]);
        }
    }
    //memset(memo,0,sizeof(memo));
    path(tri,0,0);
    cout<<maxsum<<endl;
    return 0;
}
