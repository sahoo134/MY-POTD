#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;

vector<int>findNonrepeating(vector<int>& arr){
    int sol  = 0;
    for(auto it: arr){
        sol^=it;
    }
    int maxk = sol&-(sol-1);
    int pos = log2(maxk);

    int a  = 0;
    int b = 0;

    for(auto it: arr){
        if(it & 1<<pos)
        a^=it;
        else
        b^=it;
    }
    return {a,b};
}

int main()
{
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i = 0; i < n; i++){
        int a;
        cin>>a;
        arr[i] = a;
    }
    vector<int>ans = findNonrepeating(arr);
    cout<<ans[0]<<" "<<ans[1];

}


