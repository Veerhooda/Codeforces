#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#define int long long
using namespace std;
int n,x;
vector<int>a;
bool ok(int d){
    int reqd=0;
    for(int i=0;i<a.size();i++){
        if(a[i]<d){
            reqd+=d-a[i];
        }
    }
    if(reqd>x){return false;}
    return true;
 
}
signed main()
{
    int t;
    cin>>t;
    while(t--){
        cin>>n>>x;
        a.resize(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int lo=1,hi=2e9;
        for(int i=0;i<100;i++){
            if(lo==hi)break;
            int mid=(hi+lo+1)/2;
            if(ok(mid)){
                lo=mid;
            }else{
                hi=mid-1;
            }
        }
        cout<<lo<<endl;
    }
    return 0;
}