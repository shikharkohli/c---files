#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

int towers[1000002];
int winpos[1000002];

int main()
{
    int k,l,m;
    cin>>k>>l>>m;
    memset(winpos,0,sizeof(winpos));
    int max=-1;
    for(int i=0;i<m;i++) {
        cin>>towers[i];
        if(towers[i]>max)
            max=towers[i];
    }
    for(int i=1;i<=max;i++) {
        if((i-1)>=0 && winpos[i-1]==0)
            winpos[i]=1;
        else
            if((i-k)>=0 && winpos[i-k]==0)
                winpos[i]=1;
            else
                if((i-l)>=0 && winpos[i-l]==0)
                    winpos[i]=1;
     }
     for(int i=0;i<m;i++) {
         if(winpos[towers[i]]==0)
             printf("B");
         else
             printf("A");
             }
     return 0;
}

