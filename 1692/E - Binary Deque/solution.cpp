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
        int u=0;
        int d=LLONG_MIN;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        if(sum<s){
            cout<<-1<<endl;
        }else{
            int lo=0;
            int hi=0;
            while(hi<=n-1){
                if(a[hi]==1){
                    u++;
                }
 
                while(u>s){
                    if(a[lo]==1){
                        u--;
                    }
                    lo++;
                }
 
                if(u==s){
                    d=max(d,hi-lo+1);
                }
                hi++;
            }
            cout<<n-d<<endl;
        }
        
    }
    return 0;
}