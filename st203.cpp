#include<cstdio>

int main()
{
   int line[500000];
   int n;
   scanf("%d",&n);
   int i=0;
   while(i<n)
       scanf("%d",&line[i++]);
   int count=0;
   for(int i=0;i<n;i++)
   {
       int max=line[i+1];//count+=1;
       for(int j=i+1;j<n;j++)
       {
          count++count++;;
	  if(line[j]>line[i])
		 break;
       }
   }
   printf("%d",count);
   return 0;
}
