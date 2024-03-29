#include<iostream>
#include<string>
using namespace std;
bool isvowel(char ch)
{
    return (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' ||ch=='O' || ch=='U' );
}
void lower(string &s)
{
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>'A' && s[i]<='Z')
            s[i]=s[i]-'A'+'a';
    }
}
void solve()
{
    string s;
    cin>>s;
    for(int i=0;i<s.size();)
    {
        if(isvowel(s[i]))
        {
            s.erase(s.begin()+i);
        }
        else{i++;}
    }

    int n=s.size();
    lower(s);
    for(int i=0;i<n*2;i++)
    {
        if(i%2==0){s.insert(s.begin()+i,'.');}

   }
   cout<<s;
}
int main()
{
    solve();
}

