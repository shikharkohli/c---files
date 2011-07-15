/*
Given an array of integers, each element represents the max number of
jumps can make forward. What is the minimum number of element
selections to reach the end of the array (starting from the first
element).
Example: arr = 1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9
Here the min # of selections is : 3
with the sequence : 1-> 3 -> 8 ->9
First element is 1, so can only go to 3.
Second element is 3, so can make at most 3 jumps: eg to 5 or 8 or 9.
If an element is 0, then cannot make any jumps
*/
#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    int seq[]={1,3,5,8,9,2,6,7,6,8,9};
    //int seq[]={1,1,1,1,1,1,1,1,1,1,1};
    int num[11];
    memset(num,127,sizeof(num));
    num[0]=0;
    for(int i=1;i<11;i++) {
        for(int j=0;j<=i;j++) {
            if(j+seq[j]>=i && i<=j+seq[j])
                num[i]=min(num[i],num[j]+1);
        }
    }
    for(int i=0;i<11;i++)
    cout<<num[i]<<endl;
    return 0;
}
