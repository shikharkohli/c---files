#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main()
{
    int t;
    char ch1,ch2;
    int num1,num2;
    scanf("%d",&t);int temp;char input[100];
    gets(input);
    while(t--)
    {
        //memset(input,0,sizeof(input));
        //temp=scanf("%c%d-%c%d",&ch1,&num1,&ch2,&num2);
        gets(input);
        if(strlen(input)>5){
            printf("Error\n");continue;}
        else
        {
            ch1=input[0];
            num1=input[1]-'0';
            ch2=input[3];
            num2=input[4]-'0';}
        cout<<ch1<<num1<<"-"<<ch2<<num2<<endl;
        if(input[2]!='-')
        {
            printf("Error\n");
            continue;
        }
        if((ch1>='a' && ch1<='h') && (num1>=1 && num1<=8)\
            && (ch2>='a' && ch2<='h') && (num2>=1 && num2<=8))
        {
            /*if(ch1-ch2==1 || ch2-ch1==1)
            {    
                if(num1-num2==2 || num2-num1==2)
                {    printf("Yes\n");continue;}
                else
                   { printf("No\n");continue;}
            }
            else
                if(num1-num2==1 || num2-num1==1)
            {
                if(ch2-ch1==2 || ch1-ch2==2)
                {
                    printf("Yes\n");continue;
                }
                else{
                    printf("No\n");continue;}
            }
            else
                printf("No\n");
            }else
                printf("No\n");*/
            if(((ch1-ch2)*(num1-num2))==2 || ((ch1-ch2)*(num1-num2))==-2)
                printf("Yes\n");
            else
                printf("No\n");
          }
          else
              printf("Error\n");
             
    }
    return 0;
}
