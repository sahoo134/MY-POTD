#include<iostream>
#include<string>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    if(n==4 || n==5  || n==6)
    {
        cout<<n-3<<" 1 1 1";
        return;
    }
    if(n%2==0)
    {
        cout<<n-6<<" 2 2 2";
    }
    else
    {
        cout<<n-5<<" 2 2 1";
    }

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<endl;
    }
}
