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
        vector<int>a(n+1);
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        int ans=0;
        vector<int>good;
        for(int i=1;i<=n;i++){
            if(a[i]<i){
                ans+=lower_bound(good.begin(),good.end(),a[i])-good.begin();
                good.push_back(i);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}