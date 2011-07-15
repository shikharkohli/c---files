#include<cstdio>

int main()
{
    int n;
    scanf("%d",&n);
    int k=(n+1);
    k*=(n+3);
    if(n%2==0)
    {   k/=4;k+=1;
	}
    else k/=4;

    printf("%d,%d\n",n,k);
    return 0;
}
