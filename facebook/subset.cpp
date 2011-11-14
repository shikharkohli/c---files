//TODO
//Generate all subsets of size k of a set of size n
#include<iostream>
#include<cstring>

using namespace std;

void subsetgen1(int matcher[],int set[],int n,int k,int pos=0)
{
    if(pos>=n) {
        for(int i=0;i<n;i++) {
                if(matcher[i]==1)
                    cout<<set[i]<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i=pos;i<n;i++) {
        swap(matcher[pos],matcher[i]);
        subsetgen1(matcher,set,n,k,pos+1);
        swap(matcher[pos],matcher[i]);
    }
}

void subsetgen(int matcher[],int set[],int n,int k,int pos)
{
    if(pos<0)// || matcher[pos+1]==1)
        return;
    if(matcher[pos]==0) {
        while(matcher[pos--]!=0 && pos>0);
        if(matcher[pos]==1)
            cout<<"got a one";
        subsetgen(matcher,set,n,k,pos+1);
        return;
    }
    for(int i=pos;i<n-1 && matcher[i+1]!=1;i++) {
        swap(matcher[i],matcher[i+1]);
        subsetgen(matcher,set,n,k,pos-1);
        for(int x=0;x<n;x++)
            cout<<matcher[x];
        cout<<endl;
    }
}




int main()
{
    int k,n,set[100]={1,2,3,4};
    /*cout<<"Enter k";
    cin>>k;
    cout<<"Enter n";
    cin>>n;
    for(int i=0;i<n;i++) {
        cout<<"Enter set element number "<<i+1<<" ";
        cin>>set[i];
    }*/
    n=4,k=2;
    int matcher[100];
    memset(matcher,0,sizeof(matcher));
    for(int i=0;i<k;i++)
        matcher[i] = 1;
    subsetgen(matcher,set,n,k,k-1);
    return 0;
}
