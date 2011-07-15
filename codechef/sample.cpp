
#include <stdio.h>

#include <string.h>

 

int a[20002],take[32];

 

void upd_bit(int M) {

int i;

for(i=0;i<32;i++)

if(M&(1<<i))

take[i]++;

}

void prnt_AND(int C) {

int i,v = 0;

for(i=0;i<32;i++)

if(take[i]==(2*C+1))

v += (1<<i);

printf("%d ",v);

}

void del_bit(int M) {

int i;

for(i=0;i<32;i++)

if(M&(1<<i))

take[i]--;

}

 

int main() {

int i,j,t,n,l,K,res;

long long k;

 

scanf("%d",&t);

while(t--) {

memset(take,0,32*sizeof(int));

res = 0xffffffff;

scanf("%d %lld",&n,&k);

for(i=0;i<n;i++) {

scanf("%d",&a[i]);

}

if((2*k+1)>=n) {

for(i=0;i<n;i++)

res &= a[i];

for(i=0;i<n;i++)

printf("%d ",res);

}

else {

K =(int)k;

 

for(i=1;i<=K;i++)

upd_bit(a[n-i]);

for(i=0;i<=K;i++)

upd_bit(a[i]);

prnt_AND(K);

 

for(i=1;i<n;i++) {

l = i-K-1;

if(l<0)

l += n;

del_bit(a[l]);

 

l = i+K;

if(l>=n)

l -= n;

upd_bit(a[l]);

prnt_AND(K);

}

}

printf("\n");

}

return 0;

} 
