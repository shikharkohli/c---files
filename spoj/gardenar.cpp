#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    int x,y,z;
    double S,s;
    while(t--)
    {
        scanf("%d %d %d",&x,&y,&z);
        S=0.0;
        S  += (x*x)*sqrt(3) + (y*y)*sqrt(3) + (z*z)*sqrt(3);
        S/=4.0;
        s = (x+y+z)/2.0;
        S += 3*sqrt(s*(s-x)*(s-y)*(s-z));
        S/=2;
        //cout<<S<<endl;
        printf("%.2f\n",S);
    }
    return 0;
}
