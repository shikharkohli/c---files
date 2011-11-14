#include<iostream>

using namespace std;

void permute(char abc[],int len,int start=0)
{
    if(start>=len){
        cout<<abc<<endl;
        return;
    }
    for(int i=start;i<len;i++) {
        swap(abc[start],abc[i]);
        permute(abc,len,start+1);
        swap(abc[start],abc[i]);
    }
}

int main()
{
    char str[]="abcd";
    permute(str,4);
    return 0;
}
