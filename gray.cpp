#include<cstdio>
#include<vector>

using namespace std;

int main()
{
   long long int loop = 1;
   vector<int> gray_pos(0);
    while(loop!=100)
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
    for(int i=0;i<100;i++) printf("%d ",gray_pos[i]);
    return 0;
}
