//Binary search in a rotated array, without rotating it back
#include<iostream>

const int size=5;

using namespace std;

void binary_search(int arr[],int lo,int hi,int value)
{
    int mid=(lo+hi)/2;
    while(arr[mid]!=value && lo<hi)
    {
        if(arr[mid]<value)
            lo=mid+1;
        if(arr[mid]>value) 
            hi=mid-1;
        mid=(lo+hi)/2;
        cout<<mid<<"("<<lo<<","<<hi<<")"<<endl;
    }
    if(arr[mid]==value) {
        cout<<value<<" found!"<<endl;
    }
    else
        cout<<value<<" not found!"<<endl;
}

int find_max(int arr[],int hi,int lo)
{
    int mid=(lo+hi)/2;
    while(arr[mid+1]>arr[mid]) {
        if(arr[lo]>arr[mid])
            hi=mid-1;
        if(arr[mid]>arr[hi])
            lo=mid+1;
        mid=(lo+hi)/2;
    }
    return mid;
}

int main()
{
    int arr[]={3,4,7,1,2};
    int hi=0,lo=0;
    for(int i=0;i<5;i++) {
        if(arr[i]>arr[hi])
            hi=i;
        if(arr[i]<arr[lo])
            lo=i;
    }
    int mid=find_max(arr,0,4);
    int value;
    cin>>value;
    if(value>=arr[lo] && value<=arr[mid])
        binary_search(arr,lo,mid,value);
    else if(value>=arr[mid] && value<=arr[hi])
        binary_search(arr,mid,hi-1,value);
    return 0;
}
