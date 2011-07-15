#include<iostream>
#include<cstdio>
#include<stack>

using namespace std;

int main()
{
     int num,arr[10001];
     while(scanf("%d",&num) && num!=0)
     {
        stack<int> lane;
        for(int i=0;i<num;i++)
            scanf("%d",&arr[i]);
        if(num==2){
            cout<<"yes"<<endl;continue;}
        int k=1;
        bool flag=true;
        for(int i=0;i<num;i++)
        {
            while (!lane.empty() && lane.top()==k)
            {
                k++;
                lane.pop();
            }
            if(arr[i]==k)
            {
                k++;
            }
            else if(!lane.empty() && lane.top()<arr[i])
            {
                flag=false;
                break;
            } 
            else 
            {
                lane.push(arr[i]);
            }
        }
        if(flag) 
            cout<<"yes"<<endl;
        else 
            cout<<"no"<<endl;
         
     }
     return 0;
}
