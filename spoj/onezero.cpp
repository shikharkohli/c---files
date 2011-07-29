#include<iostream>
#include<cstdio>
#include<queue>

using namespace std;

bool check(long long int n)
{
    while(n>0)
    {
        if(!(n%10==0 || n%10==1))
            return false;
        n/=10;
    }
    return true;
}

int main()
{
    int t;
    long long int n,temp;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        if(check(n)) {
            printf("%lld\n",n);
            continue;
        }
        queue<long long int> q;
        q.push(1);
        while(1)
        {
            temp=q.front();q.pop();
            if(temp%n==0) {
                printf("%lld\n",temp);
                break;
            }
            q.push(temp*10);
            q.push(temp*10+1);
        }

        /*
        unsigned long long int i=2;temp=n;
        while((temp%10)==0)
            temp/=10;
        while(i<10)
        {
            if((temp*i)%10==0 || (temp*i)%10==1)
                break;
            i++;
        }
        cout<<"-->"<<i<<endl;
        while(!check(n*i))
            i+=10;
        printf("%lld\n",n*i);
        */
    }
    return 0;
}
