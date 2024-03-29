#include<iostream>
#include<string>
#include<set>
#include<algorithm>
using namespace std;
class Solution {
public:
    bool Equal(int arr1[],int arr2[])
    {
        for(int i=0;i<26;i++)
            if(arr1[i]!=arr2[i])
            return false;
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()) return false;
        int arr[26];
        for(int i=0;i<s1.size();i++)
            arr[s1[i]-'a']++;
        int newarr[26];
        for(int i=0;i<s1.size();i++)
            newarr[s2[i]-'a']++;
        if(Equal(arr,newarr)) return true;
        for(int i=s1.size();i<s2.size();i++)
        {
            newarr[s2[i]-'a']++;
            newarr[s2[i-s1.size()]-'a']--;
            if(Equal(arr,newarr)) return true;
        }
        return false;

    }

    bool checkInclusio(string s1, string s2) {
        cout<<s1<<" "<<s2<<endl;
        sort(s1.begin(),s1.end());
        for(int i=0;i<s2.size()-s1.size()+1;i++)
        {
            cout<<i<<"  ";
            string sub=s2.substr(i,s1.size());

            sort(sub.begin(),sub.end());
            cout<<sub<<endl;
            if(s1==sub) return true;
        }
        return false;
    }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        Solution op;
        cout<<op.checkInclusion(s1,s2)<<endl;
    }
}

