#include<cstdio>

int main()
{
   int arr[42],inp[10];int ans[10];int cases=0;
   while(cases<10){
   for(int i=0;i<10;i++)
       scanf("%d",&inp[i]);
   for(int i=0;i<42;i++)
	   arr[i]=0;
   int counter=0;
   for(int i=0;i<10;i++)
	arr[(inp[i]%42)]=1;
    for(int i=0;i<42;i++)
	 if(arr[i]==1) counter++;
     //printf("%d",counter);
     ans[cases]=counter;cases++;}
     for(int i=0;i<10;i++)
	     printf("%d\n",ans[i]);
  return 0;
}  
