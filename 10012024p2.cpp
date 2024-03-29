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
     cin>>n;
     if(n/2*2==n)
     {
         cout<<"1 3";
         for(int i=0;i<n-2;i++)
            cout<<" 2";
     }
     else
     {
         for(int i=0;i<n;i++)
            cout<<"3 ";
     }
     cout<<endl;
    }
}

