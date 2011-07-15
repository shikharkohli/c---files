/*
ID: shikhar1
PROG: ride
LANG: C++
*/
#include<cstdio>
#include<cstring>

using namespace std;

int main()
{
    freopen("ride.in","r",stdin);
    freopen("ride.out","w",stdout);
    char comet[8],group[8];
    scanf("%s",comet);
    scanf("%s",group);
    int com=1,gr=1;
    for(int i=0;i<strlen(comet);i++){
        com*=comet[i]-'A'+1;
        com%=47;
    }
    for(int i=0;i<strlen(group);++i){
        gr*=group[i]-'A'+1;
        gr%=47;
    }
    if(gr==com)
        printf("GO\n");
    else
        printf("STAY\n");
    return 0;
}
