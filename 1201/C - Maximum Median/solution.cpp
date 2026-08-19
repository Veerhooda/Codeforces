#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<set>
#define int long long
using namespace std;
signed main()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int med=n/2;
    for(int i=med+1;i<n;i++){
        int cnt=i-med;
        int ct=(a[i]-a[i-1])*cnt;
        if(k>=ct){
            k-=ct;
        }else{
            cout<<a[i-1]+k/cnt;
            return 0;
        }
    }
    cout<<a[n-1]+k/(n-med)<<endl;
}