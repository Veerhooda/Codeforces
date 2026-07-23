#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<iomanip>
#define int long long
using namespace std;
int n,l;
vector<int>a;
bool ok(double d){
    if(a[0]-d>0)return false;
    if(a[n-1]+d<l)return false;
 
    for(int i=0;i<n-1;i++){
        if(a[i]+d<a[i+1]-d){
            return false;
        }
    }
    return true;
}
signed main()
{
    cin>>n>>l;
    a.resize(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    double lo=0,hi=2e9;
    for(int i=0;i<100;i++){
        double mid=(hi+lo)/2;
        if(ok(mid)){
            hi=mid;
        }else{
            lo=mid;
        }
    }
    cout<<fixed<<setprecision(10)<<hi<<endl;
    return 0;
}