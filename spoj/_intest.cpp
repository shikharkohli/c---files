#include<cstdio>

int main()
{
    int n,k,num;
    scanf("%d",&n);
    scanf("%d",&k);
    int i=0;int tot=0;
    while((i++)<n)
    {
        scanf("%d",&num);
	if(num%k == 0)
	    tot++;
    }
    printf("%d",tot);
    return 0;
}

