#include<iostream>
#include<vector>
#include<numeric>
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
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<gcd(a[0],a[n-1])<<endl;
    }
    return 0;
}