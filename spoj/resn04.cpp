#include<cstdio>

using namespace std;

int main()
{
    int t,n,piles[100];
    int sum=0;
    scanf("%d",&t);
    while(t--) {
        sum = 0;
        scanf("%d",&n);
        for(int i=0;i<n;i++) {
            scanf("%d",&piles[i]);
        }
        for(int i=0;i<n;i++) {
            sum += piles[i]/(i+1);
        }
        if(sum%2==0)
            printf("BOB\n");
        else
            printf("ALICE\n");
    }
    return 0;
}

