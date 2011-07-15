#include<cstdlib>
#include<cstdio>
#include<vector>

using namespace std;

vector<int> gray()
{
   long long int loop = 1;
   vector<int> gray_pos(0);
    while(loop!=10000)
    {
	    long long int temp = loop;
	    for(int i=0;i<64;i++)
	    {
		int k = temp & 1;
		if(k==1)
		{   
	           gray_pos.push_back(i);
		   break;
		}
		temp = temp>>1;
	    }
	    loop++;
    }
   // for(int i=0;i<10000;i++) printf("%d ",gray_pos[i]);
    return gray_pos;
}

void print(int graycode[100])
{
    int check=0;
    for(int i=5;i>=0;i--)
    {
        if(graycode[i]!=0)
		check++;
	if(check)
	   printf("%d",graycode[i]);
    }
}

int main(int argc,char *argv[])
{
    vector<int> gray_list=gray();
    int graycode[100];
    int i=0;
    while(i!=100) graycode[i++]=0;
    int n=atoi(argv[argc-1]);
    for(i=0;i<n-1;i++)
    {
	    graycode[gray_list[i]]=graycode[gray_list[i]]?0:1;
	    if(i==n-2) print(graycode);
 	    //printf("\n");
    }
    return 0;
}
