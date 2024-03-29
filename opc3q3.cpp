#include<iostream>
#include<vector>
#include<math.h>
#include<stdlib.h>
#include<algorithm>
#include<set>
#include<string>
using namespace std;
int lazycount(string &s,vector<string> &str)
{
    int arr[26]={0};
    for(int i=0; i<s.size(); i++)
        arr[s[i]-'a']++;
        int count=0;
    for(int i=0; i<str.size() ;i++)
    {
        int v[26]={0};
        for(int j=0; str[i].size(); j++)
         v[str[i][j]-'a']++;
         int k;
        for( k=0; k<26; k++)
        {
            if(v[k]!=arr[k] && arr[k]<=3)
               break;
        }
        if(k==26)
            count++;
    }
    cout<<"ok";
    return count;
}
int main()
{
   string s;
   cin>>s;
   int n;
   cin>>n;
   vector<string>str(n);
   for(int i=0; i<n; i++)
    cin>>str[i];
   cout<<lazycount(s,str)<<endl;

}


