#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
          long long sum=0;

        int arr[k];
        long long maxi=0;
        for(int i=0;i<k;i++)
        {
            arr[i]=nums[i];
            sum=sum+nums[i];
        }
        cout<<"sum:"<<sum<<endl;
        set<int>mt(arr,arr+k);
        if(mt.size()==k)
         {
            maxi=max(maxi,sum);
         }
         cout<<"maxi:"<<maxi<<endl;

        for(int i=k;i<nums.size();i++)
        {

            sum=sum+nums[i]-nums[i-k];

            for(int j=0;j<k;j++)
            {
                arr[j]=nums[i+j-k+1];
            }
             set<int>mySet(arr,arr+k);
            if(mySet.size()==k)
            {
               maxi=max(maxi,sum);
            }
             cout<<"sum:"<<sum<<endl;
              cout<<"maxi:"<<maxi<<endl;


        }

        return maxi;

    }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        Solution op;
        int n;
        cin>>n;
        vector<int>V;
        for(int i=0;i<n;i++)
        {
             int input;
             cin>>input;
             V.push_back(input);
        }
        int k;
        cin>>k;
        cout<<op.maximumSubarraySum(V,k)<<endl;
    }
}
