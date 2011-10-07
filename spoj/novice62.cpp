//TODO--TLE
#include<cstdio>

using namespace std;

int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--) {
        scanf("%d",&n);
        int sum=0;

        for(int i=3;i<=n;i++) {
            int temp=i;
            int prod=1;
            while(temp<=n) {
                prod = (prod*temp)%1000000007;
                temp++;
            }
            if(i%2)
                sum +=  prod;
            else
                sum -= prod;
            sum %= 1000000007;

        }
        if(n==1)
             printf("0\n");
        else
            if(n==2)
                printf("1\n");
            else
                printf("%d\n",sum-(n%2));
    }
    return 0;
}
                
