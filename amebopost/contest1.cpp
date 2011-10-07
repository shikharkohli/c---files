#include<cstdio>

using namespace std;

int contest1(int arg1,int arg2)
{
    int a=arg1,b=arg2;
    int hcf;int temp;
    while(b!=0) {
        temp=b;
        b=a%b;
        a=temp;
    }
    hcf = a;
    return (arg1*arg2)/hcf;
}


/*
int main()
{
    printf("%d\n",contest1(10,5));
    return 0;
}
*/
