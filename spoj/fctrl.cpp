#include<cstdio>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    int k = t;
    long int num[1000000];
    while(t--)
	    scanf("%ld",&num[k-t-1]);
    for(int i=0;i<k;i++)
	    printf("%ld\n",num[i]);
    return 0;
}
