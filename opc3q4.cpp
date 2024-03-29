#include<iostream>
#include<vector>
using namespace std;
int match(vector<int>&arr,int m)
{
  int max1=0;
  for(int i=0; i<arr.size(); i++)
  {
      max1=max(max1,arr[i]);
  }
  vector<int>dif;
  for(int i=0; i<arr.size(); i++)
  {
    dif.push_back(max1-arr[i]);
    cout<<dif[i]<<" ";
  }
  cout<<endl;
    int max12=-1;
    int item = 0;
  for(int i=0; i<arr.size(); i++)
  {
      int it = max1 - arr[i];
      int sum =0;
      for(int j=0; j<dif.size(); j++)
      {
          int cal = dif[j] -it;
          if(cal>0)
            sum =sum +cal;
      }
      cout<<sum<<"  "<<arr[i]<<"  "<<endl;
      if(sum<=m && sum >max12)
      {
          max12=sum;
          item = arr[i];
      }

  }
  return item;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    cout<<match(v,m)<<endl;
    }

}
