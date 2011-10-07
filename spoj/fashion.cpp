#include<iostream>
#include<vector>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
    int t,n,a[1000],b[1000];
    scanf("%d",&t);
    while(t--) {
        scanf("%d",&n);
        for(int i=0;i<n;i++) {
            scanf("%d",&a[i]);
        }
        for(int i=0;i<n;i++) {
            scanf("%d",&b[i]);
        }
        sort(a,a+n);
        sort(b,b+n);
        int sum=0;
        for(int i=0;i<n;i++) {
            sum+=a[i]*b[i];
        }
        printf("%d\n",sum);
    }
    return 0;
}
