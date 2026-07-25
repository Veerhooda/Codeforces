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
    int m;
    cin>>m;
    vector<int>q(m);
    for(int i=0;i<m;i++){
        cin>>q[i];
    }
    vector<int>pre;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        pre.push_back(sum);
    }
    int ans=0;
    for(int i=0;i<m;i++){
        int target=q[i];
        int lo=0,hi=n-1;
        while(lo<=hi){
            int mid=(hi+lo)/2;
            if(pre[mid]>=target){
                ans=mid;
                hi=mid-1;
            }else{
                lo=mid+1;
            }
        }
        cout<<ans+1<<endl;
    }
    return 0;
}