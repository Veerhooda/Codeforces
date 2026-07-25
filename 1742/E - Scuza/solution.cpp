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
        int n,q;
        cin>>n>>q;
        vector<int>a(n);
        vector<int>k(q);
        vector<int>pre(n);
        vector<int>prem(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(i==0){
                pre[i]=a[i];
                prem[i]=a[i];
            }else{
                pre[i]=pre[i-1]+a[i];
                prem[i]=max(prem[i-1],a[i]);
            }
 
        }
        for(int i=0;i<q;i++){
            cin>>k[i];
        }
        for(int i=0;i<q;i++){
            int lo=0,hi=n-1;
            int ans=-1;
            while(lo<=hi){
                int mid=(hi+lo)/2;
                if(prem[mid]<=k[i]){
                    ans=mid;
                    lo=mid+1;
                }else{
                    hi=mid-1;
                }
            }
            if(ans==-1){
                cout<<0<<" ";
            }else{
                cout<<pre[ans]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}