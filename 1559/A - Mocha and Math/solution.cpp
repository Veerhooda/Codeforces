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
        int n;
        cin>>n;
        int ans;
        cin>>ans;
        for(int i=1;i<n;i++){
            int x;
            cin>>x;
            ans&=x;
        }
        cout<<ans<<endl;
    }
    return 0;
}