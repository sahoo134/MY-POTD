#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cout<<"Enter length:";
        cin>>n;
        int arr[n];
        cout<<"Enter "<<n<<"numbers:";
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        int re_result[n];
        for(int i=0;i<n;i++)
        {
            int p;
            cout<<"Enter"<<i+1<<"size";
            cin>>p;
            string s;
            cout<<"Enter a string";
            cin>>s;
              int s1=arr[i];
            for(int j=s.size()-1;j>=0;j--)
            {
                char ch=s[j];
                if('D'==ch)
                s1=(s1+1)%10;
                else
                s1=(s1+9)%10;
            }
            re_result[i]=s1;
        }



        for(int i=0;i<n;i++)
        cout<<re_result[i]<<" ";




    }
}
