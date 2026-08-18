#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#define int long long
using namespace std;
int n,h;
vector<int>a;
bool ok(int k){
    int sum=0;
    for(int i=1;i<n;i++){
        sum+=min(k,a[i]-a[i-1]);
    }
    sum+=k;
    if(sum<h){
        return false;
    }
    return true;
}
signed main()
{
    int t;
    cin>>t;
    while(t--){
        cin>>n>>h;
        a.resize(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int lo=0;
        int hi=h;
        while(lo<hi){
            int mid=(hi+lo)/2;
            if(ok(mid)){
                hi=mid;
            }else{
                lo=mid+1;
            }
        }
        cout<<hi<<endl;
    }
    return 0;
}