#include<stdio.h>
main(){int t;while(scanf("%d",&t)!=EOF)printf("%d\n",t&1?t+2:t+1);}
