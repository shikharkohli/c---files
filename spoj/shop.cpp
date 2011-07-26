#include<iostream>
#include<queue>
#include<cstdio>
#include<algorithm>
#include<cstring>

using namespace std;

struct triple
{
    int x,y,sum;
};

inline triple make_triple(int i,int j,int num)
{
    triple temp;
    temp.x=i;
    temp.y=j;
    temp.sum=num;
    return temp;
}

int main()
{
    int r,c;
    long long int max;
    char mat[25][25];
    while(1)
    {
        scanf("%d %d",&c,&r);
        if(r==0 && c==0)
            return 0;
        max = 9*(r+c);
        queue<triple> bfs;
        int i,j;
        memset(mat,0,sizeof(mat));
        for(i=0;i<r;i++){
                scanf("%s",mat[i]);
                cout<<mat[i]<<endl;
        }
        for(i=0;i<r;i++)
            for(j=0;j<c;j++)
                if(mat[i][j]=='S')
                    break;
        cout<<mat[i][j]<<endl;
        bfs.push(make_triple(i,j,0));
        triple temp;
        while(!bfs.empty())
        {
            temp=bfs.front();
            bfs.pop();
            if(mat[temp.x][temp.y]=='D'){
                if(temp.sum<max && temp.sum>0){
                    max=temp.sum;
                cout<<max<<endl;
                }
                continue;
            }
            if(temp.x-1 >=0 && (mat[temp.x-1][temp.y]!='X' \
                || mat[temp.x-1][temp.y]!='S') && \
                (temp.sum + mat[temp.x-1][temp.y] - '0'<max\
                && temp.sum+mat[temp.x-1][temp.y]>0))
                bfs.push(make_triple(temp.x - 1,temp.y,temp.sum+mat[temp.x-1][temp.y]-'0'));

            if(temp.x+1 < c && (mat[temp.x+1][temp.y]!='X' || mat[temp.x+1][temp.y]!='S') && (temp.sum + mat[temp.x+1][temp.y] - '0'<max && temp.sum+mat[temp.x+1][temp.y]>0))
                bfs.push(make_triple(temp.x+1,temp.y,temp.sum+mat[temp.x+1][temp.y]-'0'));
            if(temp.y-1 >=0 && (mat[temp.x][temp.y-1]!='X' || mat[temp.x][temp.y-1]!='S') && (temp.sum + mat[temp.x][temp.y-1]-'0'<max && temp.sum+mat[temp.x+1][temp.y]>0))
                bfs.push(make_triple(temp.x,temp.y-1,temp.sum+mat[temp.x][temp.y-1]-'0'));
            if(temp.y+1<r && (mat[temp.x][temp.y+1]!='X' || mat[temp.x][temp.y+1]!='S') && (temp.sum + mat[temp.x][temp.y+1]-'0'<max && temp.sum+mat[temp.x][temp.y+1]<0))
                bfs.push(make_triple(temp.x,temp.y+1,temp.sum+mat[temp.x][temp.y+1]-'0'));
        }
        cout<<"-->"<<max<<endl;
    }
    return 0;
}
