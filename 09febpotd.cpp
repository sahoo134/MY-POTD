#include<iostream>
#include<vector>
using namespace std;
vector<int> findpile(vector<int>& arr, vector<int>& v)
{
    vector<int>psum;
    psum.push_back(arr[0]);
    for(int i=1; i<arr.size(); i++)
    {
        psum.push_back(psum[i-1]+arr[i]);
    }


    vector<int>ans;
    for(int i=0; i<v.size(); i++)
    {
        int start =0;
        int end = psum.size() - 1;
        int target = v[i];
        int mid;
          int ans1=-1;
        while(start<=end)
        {
            mid = start + (end - start)/2;

            if(psum[mid] >=target)
            {
               ans1=mid;
               end = mid -1;
            }
            else
                start = mid + 1;
        }
        ans.push_back(ans1+1);

    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++)
        cin>>arr[i];
    int m;
    cin>>m;
    vector<int>v(m);
    for(int i=0; i<m; i++)
        cin>>v[i];
    vector<int>ans = findpile(arr,v);
    for(int i = 0; i<m; i++)
        cout<<ans[i]<<" ";
}
