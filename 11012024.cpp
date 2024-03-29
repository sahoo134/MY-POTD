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
        int size[n];
        cout<<"Enter "<<n<<"  size:";
        for(int i=0;i<n;i++)
        {
            cin>>size[i];
        }

        char **p=new char*[n];
        for(int i=0;i<n;i++)
            p[i]=new char[size[i]];
        for(int i=0;i<n;i++)
        {
            cout<<"Enter"<< i+1 <<"ki "<< size[i]<<"value:";
            for(int j=0;j<size[i];j++)
            {
                cin>>p[i][j];
            }
        }
        int re_result[n];
        for(int i=0;i<n;i++)
        {
              int s=arr[i];
            for(int j=size[i]-1;j>=0;j--)
            {
                if('D'==p[i][j])
                s=(s+1)%10;
                else
                s=(s+9)%10;
            }
            re_result[i]=s;
        }
        for(int i=0;i<n;i++)
        cout<<re_result[i]<<" ";
       /* for(int i=0;i<n;i++)
        {

            for(int j=0;j<size[i];j++)
            {
                cout<<p[i][j]<<" ";
            }
            cout<<endl;
        }*/
         for(int i=0;i<n;i++)
            delete[] p[i];
        delete p;


    }
}
