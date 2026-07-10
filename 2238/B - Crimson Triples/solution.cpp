#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#define int long long
using namespace std;
signed main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long total=0;
        long long b=1;
        while (b<=n) {
            long long q=n/b;
            long long b2=n/q;
            long long cnt=b2-b+1;
            total+=cnt*q*q;
            b=b2+1;
        }
        cout<<total<<endl;
    }
    return 0;
}