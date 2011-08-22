#include<iostream>
#include<map>
#include<vector>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> nums(n);
    for(int i=0;i<n;i++) {
        cin>>nums[i];
    }
    map<int,int> hashmap;
    int val=0;
    for(int i=0;i<n;i++)
    {
        if(hashmap[(nums[i]-k)]) {
            val++;
    //        cout<<nums[i]<<","<<(nums[i]-2)<<endl;
            //cout<<hashmap[(nums[i]+2)];
            //cout<<endl;
        }
        if(hashmap[(nums[i]+k)]) {
            val++;
      //      cout<<nums[i]<<","<<nums[i]+k<<endl;
        }

        hashmap[nums[i]]=1;
    }
    cout<<val<<endl;
    return 0;
}
