#include<iostream>

using namespace std;

int main()
{
   int t;
   scanf("%d",&t);
   int ans[t][3];int temp=t;
   while(t--)
   {
	ans[t][0]=0;
	ans[t][1]=0;
	ans[t][2]=0;
	int lim,men,women,kids;
        cin>>lim>>men>>women>>kids;
	int m=1,w=0,k=0;
	int total=0;
	while(m<=men)
	{
	    w=2*m-2;
	    while((w>=(2*m-2) && w<=2*m) && w<=women) 
	    {
		    k=1;
		    while(k<=4*(m+w) && k<=kids)
		    {
			  if((m+w+k)<=lim)
			  {
				  if(k>ans[t][2] || ((m+w+k)>(ans[t][0]+ans[t][1]+ans[t][2])))
				  {ans[t][0]=m;ans[t][1]=w;ans[t][2]=k;}
				  //cout<<m<<" "<<w<<" "<<k<<endl;
			  }
			  k++;
		    }
		    w++;
	    }
	    m++;
	}
    }
    for(int i=temp-1;i>=0;i--)
	    printf("%d %d %d\n",ans[i][0],ans[i][1],ans[i][2]);
    return 0;
}
			    
