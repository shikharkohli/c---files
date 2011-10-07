#include<iostream>
#include<cstring>

using namespace std;

int ways(int sum,int coins[],int num_of_coins,int pos=0)
{
    if(sum<0)
        return 0;
    if(sum==0)
        return 1;
    int totways= 0;
    for(int i=0;i<num_of_coins;i++) {
        if(sum-coins[i]==0) {
            totways += 1;
            return 0;
        else
        {
            totways += ways(sum-coins[i],coins,num_of_coins);//,pos+1);
            totways += ways(sum-coins[i],coins,num_of_coins);//,pos);
        }
    }
    return totways;
}


int main()
{
    int coins[] = {1,2,5,10,20,50,100,200};
    cout<<ways(3,coins,8)<<endl;
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
