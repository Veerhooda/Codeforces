#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#define int long long
const int MOD=998244353;
using namespace std;
signed main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        int i=0;
        int w=1;
        int ans=0;
        while(i<n){
            int j=i;
            while(j<n && s[i]==s[j]){
                j++;
            }
            int l=j-i;
            i=j;
            ans+=(l-1);
            w=(w*l)%MOD;
        }
        for(int i=1;i<=ans;i++){
            w=(w*i)%MOD;
        }
        cout<<ans<<" "<<w<<endl;
    }
    return 0;
}