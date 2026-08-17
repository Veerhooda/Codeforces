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
        int n,s;
        cin>>n>>s;
        vector<int>a(n);
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        if(sum<s){
            cout<<-1<<endl;
        }else{
            int lo=0;
            int cur=0;
            int ans=0;
            for(int hi=0;hi<n;hi++){
                cur+=a[hi];
                while(cur>s){
                    cur-=a[lo];
                    lo++;
                }
                if(cur==s)ans=max(ans,hi-lo+1);
            }
            cout<<n-ans<<endl;
        }
        
    }
    return 0;
}