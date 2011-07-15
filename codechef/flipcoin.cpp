#include <iostream>
#include <math.h>
#include <list>
#include <algorithm>
#include <string>
#include <vector>
#include <sstream>
#include <stdlib.h>
#include <memory.h>
#include <map>
#include <stack>
#include <queue>
#include <set>
#include <stdio.h>
#include <assert.h>

using namespace std;
#define SET(a,n) memset(a,n,sizeof(a));
#define FOR(a,b,c) for(int a=b;a<c;++a)
#define GET(a) scanf("%d",&a)

typedef long long int LL;
typedef vector<int> VI;

using namespace std;

//globals
#define MAX 100005
int tree[4*MAX],flip[4*MAX],N;
int q,a,b,c;


void refresh(int v,int H,int T)
{
    flip[v]=1-flip[v];
    tree[v]=T-H+1-tree[v];
    return;
}

void update(int v,int H,int T)
{
    if(flip[v]) {
        if(H!=T) {
            refresh((v<<1)+1,H,(H+T)>>1);
            refresh((v<<1)+2,((H+T)>>1) + 1,T);
        }
        flip[v]=0;
    }

    if(H>=a && T<=b) {
        flip[v]=1;
        tree[v]=T-H+1-tree[v];
        return;
    }

    int M = (H+T)>>1;

    if(M>=a) {
        update(2*v+1,H,M);
    }
    if(M+1<=b) {
        update(2*v+2,M+1,T);
    }

    tree[v]=tree[2*v+1]+tree[2*v+2];
    return;
}

void query(int v,int H,int T,int& ans)
{
    if(flip[v]) {
        if(H!=T) {
            refresh((v<<1)+1,H,(H+T)>>1);
            refresh((v<<1)+2,((H+T)>>1) + 1,T);
        }
        flip[v]=0;
    }

    if(H>=a && T<=b) {
        ans=tree[v];
        return;
    }

    int M = (H+T)>>1;

    int ans1,ans2;
    ans1=ans2=0;

    if(M>=a) {
        query(2*v+1,H,M,ans1);
    }
    if(M+1<=b) {
        query(2*v+2,M+1,T,ans2);
    }
    ans=ans1+ans2;
    return;
}

int main()
{
   //freopen("i.txt","r",stdin);

    GET(N);
    GET(q);

    SET(tree,0);
    SET(flip,0);

    FOR(i,0,q) {
        scanf("%d %d %d",&c,&a,&b);
        a++;
        b++;
        if(c==0) {
            update(0,1,N);
         } else {
            int ans;
            query(0,1,N,ans);
            printf("%d\n",ans);
        }
    }
    return 0;
}
