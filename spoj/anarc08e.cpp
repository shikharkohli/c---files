#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int a,b;
    while(1) {
        scanf("%d%d",&a,&b);
        if(a==-1 && b==-1)
            return 0;
        if((a==0 || a==1) || (b==0 || b==1))
            printf("%d+%d=%d\n",a,b,a+b);
    }
    return 0;
}
