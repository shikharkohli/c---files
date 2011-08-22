//Binary search in a rotated array, without rotating it back
#include<iostream>

const int size=7;

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

int find_max(int arr[],int lo,int hi)
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
    int arr[]={5,6,7,8,1,2,3};
    int hi=size-1,lo=0;
    int mid=find_max(arr,0,size);
    int value;
    cin>>value;
    cout<<"!"<<mid<<"!"<<endl;
    if(value>=arr[lo] && value<=arr[mid])
        binary_search(arr,lo,mid,value);
    else if(value>=arr[mid+1] && value<=arr[hi])
        binary_search(arr,mid,hi,value);
    return 0;
}
