#include<iostream>
#include<stack>
#include<cstdio>

using namespace std;

int main()
{
    int t;int pt=0;int ans[1000000];
    scanf("%d",&t);
    while(t>0)
    {   t--;
	stack<int> s;
        int num;
	scanf("%d",&num);
	for(int i=num;i>=1;i--)
	   s.push(i);
	stack<int> temp;;
	while(1)
	{  int i=1; 
		if(s.size()==1) break;
		while(s.size()>0)
		{
	            if(i==1)
	     	    {
		       s.pop();
		       i=0;
		    }
	     	    else
	     	    {
		 	temp.push(s.top());
		 	s.pop();i=1;
	     	    }
		}
		while(temp.size()>0)
		{
	            s.push(temp.top());
           	    temp.pop();
                }
	}
	
	if(s.size()==1)
	{
		ans[pt++]=s.top();
		//printf("%d\n",s.top());
	}
     }
    for(int i=0;i<pt;i++)
	    printf("%d\n",ans[i]);
    return 0;
}
	     
