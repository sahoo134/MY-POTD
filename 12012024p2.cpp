#include<iostream>
#include<string>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    string s;
    cin>>s;
    int size=s.size();
    for(int i=0;i<size;i++)
    {
        if(k+'0'>s[i])
        {
            s.insert(i,1,k+'0');
            break;
        }
    }
    if(size==s.size())
        s.push_back(k+'0');
    cout<<s;

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
