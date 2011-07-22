#include<iostream>
#include<queue>
#include<cstdio>
#include<algorithm>

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
    int r,c,max;
    char mat[25][25];
    while(1)
    {
        scanf("%d %d",&c,&r);
        if(r==0 && c==0)
            return 0;
        max = 4;
        queue<triple> bfs;
        int i,j;
        for(i=0;i<r;i++){
                scanf("%s",mat[i]);
                cout<<mat[i];
            cout<<endl;
        }
        for(i=0;i<r;i++)
            for(j=0;j<c;j++)
                if(mat[i][j]=='S')
                    break;
        bfs.push(make_triple(i,j,0));
        triple temp;
        while(!bfs.empty())
        {
        //    cout<<"Checking queue ";
            temp=bfs.front();
            if(mat[temp.x][temp.y]=='D'){
                if(temp.sum<max)
                    max=temp.sum;
                continue;
            }
            if(temp.x-1 >=0 && (mat[temp.x-1][temp.y]!='X' || mat[temp.x-1][temp.y]!='S') && (temp.sum + mat[temp.x-1][temp.y]<max))
                bfs.push(make_triple(temp.x - 1,temp.y,temp.sum+mat[temp.x-1][temp.y]));
            if(temp.x+1 < c && (mat[temp.x+1][temp.y]!='X' || mat[temp.x+1][temp.y]!='S') && (temp.sum + mat[temp.x+1][temp.y]<max))
                bfs.push(make_triple(temp.x+1,temp.y,temp.sum+mat[temp.x+1][temp.y]));
            if(temp.y-1 >=0 && (mat[temp.x][temp.y-1]!='X' || mat[temp.x][temp.y-1]!='S') && (temp.sum + mat[temp.x][temp.y-1]<max))
                bfs.push(make_triple(temp.x,temp.y-1,temp.sum+mat[temp.x][temp.y-1]));
            if(temp.y+1<r && (mat[temp.x][temp.y+1]!='X' || mat[temp.x][temp.y+1]!='S') && (temp.sum + mat[temp.x][temp.y+1]<max))
                bfs.push(make_triple(temp.x,temp.y+1,temp.sum+mat[temp.x][temp.y+1]));
            bfs.pop();
        }
        cout<<max<<endl;
    }
    return 0;
}
