#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(nums[i]==nums[j] && j-i<=k)
                {
                    return true;
                }
            }
        }
        return false;
    }
/*for(int i=0;i<n-k;i++)
{
    set<int>mySet(nums.begin()+i,nums.begin()+i+k+1);
    for(int it:mySet)
    cout<<it<<" ";
    cout<<endl;
    if(mySet.size()<k)
    return true;
}*/
};
int main()
{
    int t;
    cin>>t;
    Solution op;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        int k;
        cin>>k;
        cout<< op.containsNearbyDuplicate(v,k);}
}
