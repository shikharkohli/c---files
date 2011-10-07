#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
    double px,py,gkx,gky,gkr;
    int t;
    const double gx=52.5,g1y=3.66,g2y=-3.66;
    double m1,m2,n,d,dist1,dist2,c;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lf %lf",&px,&py);
        scanf("%lf %lf %lf",&gkx,&gky,&gkr);
        //printf("%lf %lf\n%lf %lf %lf\n",px,py,gkx,gky,gkr);
        if((px==gx)) {
            printf("->No goal...\n");
            continue;
        }
        m1 = (py-g1y)/(px-gx);
        m2 = (py-g2y)/(px-gx);
        n = gky - (m1*gkx) - (py - (m1*px));
        d = sqrt(1.0 + (m1*m1));
        if(fabs(n/d) > gkr) {
            printf("Goal!\n");
            continue;
        }
        n = gky - (m2*gkx) - (py - (m2*px));
        d = sqrt(1.0 + m2*m2);
        if(fabs(n/d) > gkr) {
            printf("Goal! \n");
            continue;
        }
        else
            printf("No goal...\n");
    }
    return 0;
}
