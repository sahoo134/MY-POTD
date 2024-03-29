#include<bits/stdc++.h>
using namespace std;
class solution
{
    public:
    int countPrime(int n)
    {
        vector<int>store(n+1,1);

        int size = sqrt(n);

        for(int i = 2; i <= size; ++i){

            if(store[i] == 1){

                for(int j = i*i; j < n+1; j+=i){

                    store[j] = 0;
                }
            }
        }

        int count = 0;

        for(int i = 2; i < n+1; i++){

            if(store[i] == 1)
                count++;
        }

        return count;


    }
};
int main()
{
    int n;

    cin>>n;

    solution obj;
    cout<<obj.countPrime(n);
}
