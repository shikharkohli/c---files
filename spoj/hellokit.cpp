#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

int main()
{
    char input[100];
    int n;
    while(scanf("%s",input))
    {
        if(strcmp(input,".")==0)
            return 0;
        scanf("%d",&n);
        //printf("%s\n",input);
        int len=strlen(input);
        for(int k=0;k<len;k++)
        {
            for(int i=0;i<n*len;i++)
            {
                printf("%c",input[(k+i)%len]);
            }
            printf("\n");
        }
    }
    return 0;
}

        
