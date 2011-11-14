#include<iostream>
#include<cstring>

using namespace std;

int totway=0;

void ways(int sum,int coins[],int num_of_coins,int pos=0)
{
    if(sum<0)
        return;
    if(sum==0){
        totway+=1;
        return;
    }
    if(pos>=num_of_coins)
        return;
    for(int i=0;i<=sum/coins[pos];i++)
    {
        ways(sum-coins[pos]*i,coins,num_of_coins,pos+1);
    }
}


int main()
{
    int coins[99];// = {1,2,5,10,20,50,100,200};
    for(int i=0;i<99;i++)
        coins[i] = i+1;
    ways(100,coins,99);
    cout<<totway<<endl;
    return 0;
}

    /*int values[201];
    memset(values,0,sizeof(values));
    values[0] = 1;
    values[1] = 1;
    for(int i=2;i<201;i++) {
        for(int j=0;j<8;j++) {
            if( i-j >= 0)
                values[i] += values[i-j] ;
        }
    }
    cout<<values[3]<<" "<<values[200]<<endl;
    return 0;
}*/
