#include<iostream>
#include<stdio.h>
#include<vector>

using namespace std;

int main()
{
     int t;
     scanf("%d",&t);
     vector< pair<int,int> > together;
     int h=0,m=0;
     together.push_back(make_pair(0,0));
     for(int i=1;i<1410;i++)
     {
         if((((12*i)%360)<=i%360) && ((12*(i+1))%360)>=(i+1)%360 && (together[together.size()-1].first!=i/60))
         {
                m=i%60;
                h=i/60;
                together.push_back(make_pair(h,m));
       //         cout<<i<<"-->"<<together[together.size()-1].first<<":"<<together[together.size()-1].second<<endl;
         }
     }
     int hhbeg,hhend,mmend,mmbeg;
     int len=together.size(),start=0;
     int end=len-1;int ans;
     while(t--)
     {
           start=0,end=len-1;
           scanf("%d:%d",&hhbeg,&mmbeg);
           scanf("%d:%d",&hhend,&mmend);
           while(hhbeg>=together[start++].first && start<len);
           //cout<<together[start-1].first<<":"<<together[start-1].second<<endl;
           /**ans=0;
           if(mmbeg<together[start-1].second)
               ans++;
           while(together[start].first<hhend)
           {
               ans++;start++;
           }
           if(together[start-1].second<mmend)
                ans++;
           //else
           //    ans--;
           printf("ans->%d\n",ans);*/
           ans=hhend-hhbeg;
           if(mmbeg<together[hhbeg].second)
           {
               ans+=1;
           }
           if(mmend<together[hhend].second)
               ans-=1;
           else
               ans+=1;
           cout<<ans<<endl;
     }
     //cout<<len<<endl;
     return 0;
}



