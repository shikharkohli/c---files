#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
    int n,k,s;
    int arr[1000];
    scanf("%d%d%d",&n,&k,&s);
    for(int i=0;i<n;i++)
        scanf("%d",arr+i);
    sort(arr,arr+n);
    int tot=k*s,min=0;
    int i=n-1;
    while(i>=0 && tot>0) {
        tot-=arr[i--];
        min++;
    }
    printf("%d\n",min);
    return 0;
}
