//TODO
//Print all combinations of a number
//as a sum of candidate numbers
//target is 7, candidates are 2,3,6,7
//output should be 7 and 3+2+2
#include<iostream>
#include<cstring>
#include<cstdlib>

using namespace std;

int times;

void print_sum(int target,int candidates[],int num_candidates,int pos,int toreach,char str[])
{
    if(toreach==0) {
        cout<<str<<endl;
        cout<<++times<<endl;
        //free(str);
        return;
    }
    if(toreach<0) {
        //free(str);
        return;
    }
    for(int i=pos;i<num_candidates;i++) {
        char *str1=(char *)malloc(sizeof(str)+3);
        strcpy(str1,str);
        str1[strlen(str)]=(char)(candidates[i]+48);
        str1[strlen(str)+1]='+';
        str1[strlen(str)+2]='\0';
        int k=1;
        while(k*candidates[i] >= toreach) {
            print_sum(target,candidates,num_candidates,pos+1,toreach-k*candidates[i],str1);
            k++;
        }
        //free(str1);
    }
}

int main()
{
    int cand[]={2,3,7};
    print_sum(7,cand,3,0,7,"");
    return 0;
}
