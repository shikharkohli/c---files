#include<cstdio>

int main()
{
    char str[1001];
    scanf("%s",str);int maxprod=0;
    for(int i=0;i<1000-5;i++) {
        int prod=1;
        int j=0;
        while(j<5) {
            prod*=str[i+j]-'0';
            j++;
        }
        if(prod>maxprod)
            maxprod=prod;
    }
    printf("%d\n",maxprod);
    return 0;
}
