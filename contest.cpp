#include<iostream>
#include<vector>
using namespace std;
int Dontmatch(vector<int>arr)
{
    int ans = 0;
    for(int i=0; i<arr.size(); i++)
        ans^=arr[i];
    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    cout<<Dontmatch(v)<<endl;
}
