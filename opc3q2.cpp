#include<iostream>
#include<vector>
#include<math.h>
#include<stdlib.h>
#include<algorithm>
#include<set>
using namespace std;
int Minwaiters(vector<vector<int>> arr)
{
   vector<int>ans;
   for(int i=0; i<arr.size(); i++)
   {

           ans.push_back(arr[i][0]*60+arr[i][1]);

   }
   set<int>mySet(ans.begin(),ans.end());
   int max1=INT_MIN;
   for(int it:mySet)
   {
       int count=0;
       for(int i=0; i<ans.size(); i++)
       {
           if(it == ans[i])
            count++;
       }
       max1=max(max1,count);
   }
   return max1;


}
int main()
{
   int n;
   cin>>n;
   vector<vector<int>>arr(n,vector<int>(2));
   for(int i=0; i<arr.size(); i++)
   {
       for(int j=0; j<arr[0].size(); j++)
       {
           cin>>arr[i][j];
       }
   }
   cout<<Minwaiters(arr)<<endl;

}
