#include<iostream>

using namespace std;

void staffmaker(int branch[],int length) {
    for(int i=0;i<length;i++) {
        for(int j=i+1;j<length;j++) {
            int sum = 0;
            int k=i;
            while(k<=j)
                sum += branch[k++];
            k=i+1;
            cout<<"Checking ("<<i<<","<<j<<") with sum"<<sum<<endl;
            for(;k+(j-i)<length;k++) {
                int tempsum=0;
                int x=k;
                while(x<=k+(j-i))
                    tempsum += branch[x++];
                cout<<"\n\t"<<tempsum;
                //if(tempsum == sum) {
                    cout<<"("<<i<<","<<j<<") ("<<k<<","<<k+(j-i)<<")"<<endl;
                    int start1=i,end1=j,start2=k,end2=k+(j-i);
                    //Case 1
                    //(start1,end1)->(start2,end2)
                    int centerofmass=0;
                    for(x=1;x<=(j-i+1)*2;x++) {
                        centerofmass = x*

                //}
            }
        }
    }
}
int main()
{
    int arr[]={1,2,2,1};
    staffmaker(arr,4);
    return 0;
}
