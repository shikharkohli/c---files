#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int a[]={1,3,4,2,5,6};
    sort(a,a+6);
    reverse(a,a+6);
    for(int i=0;i<6;i++)
	    cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
