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
        cin>>n;
        cin>>q;
        string s;
        cin>>s;
        vector<int>a(n);
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                a[i]=1;
            }
            else{
                a[i]=0;
            }
        }
        vector<int>pref(n+1);
        for(int i=0;i<n-1;i++){
            pref[i+1]=pref[i]+a[i];
        }
        pref[n]=pref[n-1];
        while(q--){
            int l,r,k;
            cin>>l>>r>>k;
            int c=pref[r-1]-pref[l-1];
            if(c<=2*k){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}