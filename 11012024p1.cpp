#include<iostream>
#include<string>
using namespace std;
int main()
{
       int n;
       cin>>n;
       string s;
       cin>>s;

       int count=0;
       int i,j;
       for(i=-1,j=0;j<s.size();)
       {
           if('x'==s[j])
           {
               j++;
           }
           else
           {
               count=count+((j-i-3)>0?(j-i-3):0);
               cout<<"count"<<count<<endl;
               i=j;
               j++;
           }
       }
       count=count+((j-i-3)>0?(j-i-3):0);
       cout<<count<<endl;

}
