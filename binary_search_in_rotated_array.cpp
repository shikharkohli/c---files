//Binary search in a rotated array, without rotating it back
//TODO--almost done
#include<iostream>

const int size=5;

using namespace std;

int main()
{
    int arr[]={3,4,6,1,2};
    int hi=0,lo=0;
    for(int i=0;i<5;i++) {
        if(arr[i]>arr[hi])
            hi=i;
        if(arr[i]<arr[lo])
            lo=i;
    }
    int factor=lo;
    int mid=(sizeof(arr)/sizeof(int))/2;
    mid+=factor;
    mid%=5;
    int element=5;
    //cout<<arr[mid]<<endl;
    while(arr[mid]!=element && arr[lo]<arr[hi]) {
        if(arr[mid]<element) {
           lo = mid;
           mid=((((lo-factor)%size + (hi-factor)%size )/2)+factor)%size;
        }
        if(arr[mid]>element) {
            hi=mid;
            mid = ((((lo-factor)%size + (hi-factor)%size)/2)+factor)%size;
        }
        if(arr[mid]==element)
            cout<<arr[mid]<<" found"<<endl;
        cout<<lo<<" "<<hi<<endl;
    }
    if(arr[mid]==element)
        cout<<arr[mid]<<" found!"<<endl;
    return 0;
}
