#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    unsigned long int comb[102][102];int count=0;
    memset(comb,0,sizeof(comb));
    comb[0][0]=1;
    comb[1][0]=comb[1][1]=1;
    for(int i=2;i<=100;i++) {
        for(int j=0;j<=i;j++) {
            if(j==0 || i==j)
                comb[i][j]=1;
            else
                comb[i][j] = comb[i-1][j-1] + comb[i-1][j];
            if(comb[i][j] > 1000000)
                count++;
        }
    }
    cout<<comb[100][99]<<endl;
    cout<<"Count is "<<count<<endl;
    return 0;
}
