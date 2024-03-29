#include<iostream>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(n==2)
    {
      cout<<arr[0]*arr[1];
      return;
    }

    long long  max1=INT_MIN;
    long long max2=INT_MIN;
    long long min1=INT_MAX;
    long long min2=INT_MAX;
     for(int i=0;i<n;i++)
    {
        if(arr[i]>=max1)
        {
            max2=max1;
            max1=arr[i];
        }
        else
        {
            if(arr[i]>max2)
                max2=arr[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=min1)
        {
            min2=min1;
            min1=arr[i];
        }
        else
        {
            if(arr[i]<min2)
                min2=arr[i];
        }
    }
    cout<<max(max1*max2,min1*min2);

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<endl;
    }
}
