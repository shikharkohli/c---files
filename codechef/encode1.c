#include<stdio.h>

int main()
{
    int t,n,temp;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int sum=0;
        if(n%2==0)
        {
            temp=(n-1)/2;
            sum+=temp*(temp+1);
            sum+=n/2;
        }
        else{
            temp=n/2;
            sum=temp*(temp+1);
        }
        printf("%d\n",sum);
    }
    return 0;
}
