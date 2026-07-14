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
        int n,m;
        cin>>n>>m;
        vector<int>a(n+1);
        vector<int>b(m);
        vector<int>pref(n+1);
        for(int i=1;i<=n;i++){
            cin>>a[i];
            pref[i]=pref[i-1]+a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
        sort(b.rbegin(),b.rend());
        int prod=pref[n]-pref[b[0]];
        for(int i=0;i<m-1;i++){
            int sum2=pref[b[i]]-pref[b[i+1]];
            prod+=abs(sum2);
        }
        int sum2=pref[b[m-1]]-pref[0];
        prod+=(abs(sum2));
        cout<<prod<<endl;
    }
    return 0;
}