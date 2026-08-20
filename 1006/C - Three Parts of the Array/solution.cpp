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
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    vector<int>prea(n);
    vector<int>prec(n);
    prea[0]=a[0];
    prec[0]=sum;
    for(int i=1;i<n;i++){
        prea[i]=a[i]+prea[i-1];
    }
    for(int i=1;i<n;i++){
        prec[i]=prec[i-1]-a[i-1];
    }
    int ans=0;
    for(int i=0;i<n-1;i++){
        int target=prea[i];
        int lo=i+1;
        int hi=n-1;
        while(lo<hi){
            int mid=(hi+lo)/2;
            if(prec[mid]>prea[i]){
                lo=mid+1;
            }else{
                hi=mid;
            }
        }
        if(prec[lo]==target){
            ans=max(ans,target);
        }
    }
    cout<<ans<<endl;
    return 0;
}