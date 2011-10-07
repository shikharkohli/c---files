//TODO
//See test case b=1, c=2000000000, d=1
#include<stdio.h>
#include<string.h>

int main()
{
    char a[210],b[210],ctemp[210],d[210],c[210];
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s %s %s",b,c,d);
        if(strcmp(b,"0")==0 && strcmp(c,"0")==0 && strcmp(d,"0")==0)
        {
            printf("0\n");continue;
        }
        strcpy(ctemp,"00");
        strcat(ctemp,c);
        strcpy(c,ctemp);
        int blen=strlen(b),clen=strlen(c),dlen=strlen(d);
        int i;int prevcarry=0;
        for(i=clen-1;i>=0;i--)
        {
            c[i]=c[i]-'0';
            /*c[i]=2*c[i];
            c[i]+=prevcarry;
            if(c[i]>=10){
                prevcarry=1;
                c[i]%=10;
            }
            else
                prevcarry=0;
            */
            /*if(c[i]>=10)
            {
                c[i-1]+=c[i]/10;
                c[i]%=10;
            }*/
            //c[i]+='0';
        }
        //printf("c-->%s\n",c);
        //printf("d-->%s\n",d);
        //printf("b-->%s\n",b);
        for(i=0;i<blen;i++)
            b[i]=b[i]-'0';
        for(i=0;i<dlen;i++)
            d[i]=d[i]-'0';
        char ans[210];
        i=clen-1;int j=blen-1;int k=dlen-1;
        int x=209;
        memset(ans,0,sizeof(ans));
        while(i>=0 || j>=0 || k>=0)
        {
            if(i>=0)
                ans[x]+=c[i]+c[i];
            if(j>=0){
                //ans[x]-=b[j];
                if(ans[x]<b[j]){
                    ans[x]+=10;
                    ans[x-1]--;
                }
                ans[x]-=b[j];
            }
            if(k>=0){
                //ans[x]-=d[k];
                if(ans[x]<d[k]){
                    ans[x]+=10;
                    ans[x-1]--;
                }
                ans[x]-=d[k];
            }
            if(ans[x]>=10){
                ans[x-1]++;
                ans[x]%=10;
            }
            i--,j--,k--,x--;
        }
        int flag=0;
        for(i=x;i<210;i++)
        {
            ans[i]+='0';
            if(ans[i]!='0')
                flag=1;
            if(flag) printf("%c",ans[i]);
        }
        printf("\n");
    }
    return 0;
}



