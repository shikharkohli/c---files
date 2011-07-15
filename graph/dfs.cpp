#include<iostream>
#define max 7 

using namespace std;

void dfs(int gv[max][max],int gc[max],int s)
{
    gc[s]=1;
   for(int i=0;i<max;i++)
   {
       if(gv[i][s]==1 && gc[i]==0)
       {
	   gc[i]=1;
	  // cout<<"Going in..."<<endl;
	   dfs(gv,gc,i);
       }
   }
   gc[s]=2;
   cout<<(char)(s+65)<<" ";
}
    

int main()
{
   int gv[max][max],gc[max];
   for(int i=0;i<max;i++)
	   gc[i]=0;
   for(int i=0;i<max;i++)
	   for(int j=0;j<max;j++)
		   gv[i][j]=0;
   for(int i=0;i<max;i++)
	   for(int j=0;j<max;j++)
	   {
		//char from='A'+i;
	        //char to='A'+j;	
		//cout<<"Is there an edge from vertex "<<from<<" to "<<to<<"? ";
		//int choice;
		/*cin>>choice;
		if(choice==1)
		{
		   gv[i][j]=1;
		}
		else
		   gv[i][j]=0;*/
		cin>>gv[i][j];
	   }
   cout<<endl;
  for(int i=0;i<max;i++)
  {	 cout<<(char)(i+65)<<"-> "; 
	  for(int j=0;j<max;j++)
	  {
  	       cout<<gv[i][j]<<" ";
	  }
	  cout<<endl;
  }
  dfs(gv,gc,0);
  return 0;
}
