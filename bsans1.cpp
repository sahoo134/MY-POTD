#include<iostream>
#include<math.h>
using namespace std;
int solve(int n, int m)
{
  long long int s = 1;
  long long int e = m;
  while(s <= e)
  {
    long long int mid = s + (e-s)/2;
    cout<<"mid: "<<mid <<endl;
    unsigned long long int nth = pow(mid,n);
    cout<<"nth:"<<nth<<"  m:"<<m<<endl;
    if(nth==(unsigned long long int) m) return mid;
    if(nth <(unsigned long long int) m) s = mid + 1;
    else e = mid - 1;
  }
  return -1;
}
int NthRoot(int n, int m) {
  // Write your code here.
  return solve(n,m);
}
int main()
{
    int n;
    int m;
    cin>>n;
    cin>>m;
    cout<<NthRoot(n,m);
}
