#include<stdio.h>
#include<string.h>

int main()
{
    char str[90];
    int t,m;
    scanf("%d",&t);int k=1;
    while(t--) {
        scanf("%d",&m);
        scanf("%s",str);
        int i=0;
        printf("%d ",k++);
        while(i<strlen(str)) {
            if(i!=m-1)
                printf("%c",str[i]);
            i++;
        }
        printf("\n");
    }
    return 0;
}
            
