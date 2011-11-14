#include<stdio.h>
#include<stdlib.h>

int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        gcd(b,a%b);
}

int main()
{
    int a,b,t;
    scanf("%d",&t);
    while(t--) {
        scanf("%d %d",&a,&b);
        if(a*b>0) {
            if(a<0 && b<0) {
                a*=-1,b*=-1; }
            int g = gcd(a,b);
            a/=g;
            b/=g;
            printf("%d\n",abs(a-b));
        }
        else {
            if(a<0)
                a*=-1;
            if(b<0)
                b*=-1;

            int g = gcd(a,b);
            a/=g;
            b/=g;
            printf("%d\n",a+b);
    }   
    }
    return 0;
}
