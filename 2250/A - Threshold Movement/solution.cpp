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
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(n%2!=0){
            cout<<"NO"<<endl;
            continue;
        }
        int mini=1e18;
        int maxi=-1e18;
        for(int i=0;i<n;i++){
            if(i%2==0){
                mini=min(mini,a[i]);
            }else{
                maxi=max(maxi,a[i]);
            }
        }
        if(mini-maxi>=2){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}