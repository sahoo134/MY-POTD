include<iostream>
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