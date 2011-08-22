#include<cstdio>
#include<cstring>

int main()
{
    int t;
    long long int n;
    scanf("%d",&t);
    while(t--) {
        int k=0;
        int arr[10000];
        memset(arr,0,sizeof(arr));
        scanf("%lld",&n);
        while(n>0) {
            if(n%4==0) {
                arr[k++]=7;
                n=(n-1)/4;
            }
            if(n%4==1) {
                arr[k++]=2;
                n/=4;
            }
            if(n%4==2) {
                arr[k++]=3;
                n/=4;
            }
            if(n%4==3) {
                arr[k++]=5;
                n/=4;
            }
        }
        for(int i=k-1;i>=0;i--)
            printf("%d",arr[i]);
        printf("\n");
    }
    return 0;
}

