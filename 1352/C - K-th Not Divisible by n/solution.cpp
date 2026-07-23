#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#define int long long
using namespace std;
int n;
int count(int m){
    int cnt=m-(m/n);
    return cnt;
}
signed main()
{
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>n>>k;
        int lo=0,hi=2e9;
        int ans;
        while(lo<=hi){
            int mid=(hi+lo)/2;
            if(count(mid)>=k){
                hi=mid-1;
                ans=mid;
            }else{
                lo=mid+1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}