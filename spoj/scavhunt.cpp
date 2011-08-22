#include<iostream>
#include<map>
#include<cstdio>
#include<vector>
#include<set>

using namespace std;

int main()
{
    int t,len;
    scanf("%d",&t);int temp=t;
    while(t--) {
        scanf("%d",&len);
        map<string,string> route;
        string temp1,temp2;
        vector< string > start;
        len;
        for(int i=0;i<len-1;i++) {
            cin>>temp1>>temp2;
            route[temp1]=temp2;
            start.push_back(temp1);
        }
        int tempi=start.size();
        int i;
        for(i=0;i<tempi;i++) 
            if(route.find(start[i])!=route.end())
                break;
        printf("Scenario #%d:\n",temp-t);
        temp1=start[i];
        for(i=0;i<len;i++) {
            cout<<route[temp1]<<endl;
            temp1=route[temp1];
        }
    }
    return 0;
}
