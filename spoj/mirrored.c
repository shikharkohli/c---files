#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
       cout<<"Ready"<<endl;
       char a,b;
       freopen("input.txt","r",stdin);
       while(1)//(a=getchar() && b=getchar()) && (a!=' ' && b!=' '))
       {
           a=(char)getchar();
           b=(char)getchar();
           if(a==' ' && b==' ')
               return 0;
           if((a=='b' && b='d') || (a=='p' && b=='q') || (a=='d' && b='b') || (a=='q' && b=='p'))
           {
               cout<<"Mirrored pair"<<endl;
           }
           else
               cout<<"Ordinary pair"<<endl;
        }
        return 0;
}

