#include<iostream>
#include<string>

using namespace std;
class Solution {
public:
    int compareVersion(string version1, string version2) {
        int ver1=0,ver2=0,i=0,j=0;
        for(int i=0;i<version1.size();i++)
            if(version1[i]=='.')
            ver1++;
            for(int i=0;i<version2.size();i++)
            if(version2[i]=='.')
            ver2++;
            int ver=ver1>ver2?ver2:ver1;
           // cout<<"ver:"<<ver<<"  ver1:"<<ver1<<"  ver2:"<<ver2<<endl;
            for(int l=0;l<=ver;l++,i++,j++)
            {
                int ans1=0;
                int ans2=0;
                cout<<"ans1:"<<ans1<<"  ans2:"<<ans2<<endl;
                while((i!=version1.size())&&(version1[i]!='.'))
                {

                    cout<<version1[i]<<" ";
                    ans1=ans1*10+version1[i]-'0';
                    cout<<"ans1:"<<ans1<<" ";
                    i++;
                }
                cout<<endl;

                while((j!=version2.size())&&(version2[j]!='.'))
                {

                     cout<<version2[j]<<" ";
                    ans2=ans2*10+version2[j]-'0';
                     cout<<"ans2:"<<ans2<<" ";
                    j++;
                }
                 cout<<endl;
                cout<<"ans1:"<<ans1<<"  ans2:"<<ans2<<endl;
                if(ans1<ans2) return -1;
                else if(ans1>ans2) return 1;
            }

            for(i;i<version1.size();i++)
            {
                cout<<"i:"<<i<<"size:"<<version1.size()<<"  ";
                if(version1[i]!='0' && version1[i]!='.')
                return 1;}
             for(j;j<version2.size();j++){
                cout<<"j:"<<j<<"size:"<<version2.size()<<"  ";
                if(version2[j]!='0' && version2[j]!='.')
                return -1;}
             return 0;




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
        cout<<op.compareVersion(s1,s2)<<endl;
    }
}

