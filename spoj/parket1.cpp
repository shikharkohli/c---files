#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
    int r,b;
    scanf("%d%d",&r,&b);
    for(int i=1;i<=(r+b)/2;i++) {
        if((r+b)%i==0) {
            if((i-2)*(((r+b)/i)-2)==b) {
                printf("%d %d\n",max(i,(b+r)/i),min(i,(b+r)/i));
                return 0;
            }
        }
    }
    return 0;
}
