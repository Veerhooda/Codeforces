#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#define int long long
using namespace std;
signed main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int q;
    cin>>q;
    while(q--){
        int m;
        cin>>m;
        int lo=0;
        int hi=n-1;
        while(lo<=hi){
            int mid=(lo+hi)/2;
            if(a[mid]<=m){
                lo=mid+1;
            }else{
                hi=mid-1;
            }
        }
        cout<<lo<<endl;
    }
    return 0;
}