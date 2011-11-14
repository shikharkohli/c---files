#include<iostream>
#include<cstdio>
#define MAX 4000000
using namespace std;

int flip[MAX];
int tree[MAX];

void refresh(int v,int H,int T) {
    flip[v]=1-flip[v];
    tree[v]=T-H+1-tree[v];
    return;
}

void update(int v,int H,int T,int a,int b)
{
    if(flip[v]) {
        if(H!=T) {
            refresh(2*v+1,H,(H+T)/2);
            refresh(2*v+2,(H+T)/2+1,T);
        }
    }
    if(H>=a && T<=b) { //set the flip flag for lazy propagation
                       //so that if a child node is queried next
                       //its values are changed
        flip[v]=1;
        tree[v]=T-H+1-tree[v];
        return;
    }
    int M=(H+T)/2;
    if(M>=a) {
        update(2*v+1,H,M,a,b);
    }
    if(M+1<=b) {
        update(2*v+2,M+1,T,a,b);
    }
    tree[v]=tree[2*v+1]+tree[2*v+2];
}

void query(int v,int H,int T,int a,int b,int &ans)
{
    if(flip[v]) {
        if(H!=T) {
            refresh(v*2+1,H,(H+T)/2);
            refresh(v*2+2,(H+T)/2 + 1,T);
        }
        flip[v]=0;
    }
    if(H>=a && T<=b) {
        ans = tree[v];
        return;
    }
    int mid=(H+T)/2;
    int ans1,ans2;
    ans1=ans2=0;
    if(mid>=a) {
        query(2*v+1,H,mid,a,b,ans1);
    }
    if(mid+1<=b) {
        query(2*v+2,mid+1,T,a,b,ans2);
    }
    ans=ans1+ans2;
    return;
}

    
int main()
{
    int n,q;
    scanf("%d",&n);
    scanf("%d",&q);int a,b,c;
    for(int i=0;i<q;i++) {
        scanf("%d %d %d",&c,&a,&b);
        a++,b++;
        if(c==0) {
            update(0,1,MAX,a,b);
        }
        else {
            int ans;
            query(0,1,MAX,a,b,ans);
            printf("%d\n",ans);
        }
    }
    return 0;
}
