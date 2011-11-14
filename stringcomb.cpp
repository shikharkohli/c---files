#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    char str[]="abcd";
    int len=strlen(str);
    int lim=1;
    for(int i=1;i<=strlen(str);i++)
        lim*=2;
    for(int i=0;i<lim;i++) {
        int shift=0;
        while(shift<len) {
            if(i & 1<<shift) {
                cout<<str[shift];
            }
            shift++;
        }
        cout<<endl;
    }
    return 0;
}
