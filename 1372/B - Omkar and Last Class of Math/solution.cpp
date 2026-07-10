#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include <numeric>
#define int long long
using namespace std;
signed main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a=0;
        int b=0;
        if(n%2==0){
            a=n/2;
            b=n/2;
            cout<<a<<" "<<b<<endl;
        }
        else{
            int smallest=n;
            for(int i=3;i*i<=n;i+=2){
                if(n%i==0){
                    smallest=i;
                    break;
                }
            }
            if(smallest==n){
                cout<<1<<" "<<n-1<<endl;
            }
            else{
                a=n/smallest;
                cout<<a<<" "<<n-a<<endl;
            }
        }
    }
    return 0;
}