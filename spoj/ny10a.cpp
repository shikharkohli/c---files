#include<iostream>
#include<cstdio>
#include<map>

using namespace std;

int main()
{
    map<string,int> count;
    int t,casenum;string input;
    scanf("%d",&t);
    while(t--)
    {
        count["HHH"] = 0;
        count["HHT"] = 0;
        count["HTH"] = 0;
        count["HTT"] = 0;
        count["THH"] = 0;
        count["THT"] = 0;
        count["TTH"] = 0;
        count["TTT"] = 0;
        scanf("%d",&casenum);
        cin>>input;
        for(int i=0;i<=input.length()-3;i++) {
            count[input.substr(i,3)]++;
        }
        printf("%d ",casenum);
        for(map<string,int>::reverse_iterator it=count.rbegin();it!=count.rend();it++)
        {
            printf("%d ",it->second);
        }
        printf("\n");
    }
    return 0;
}
