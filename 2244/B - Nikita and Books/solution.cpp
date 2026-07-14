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
        int sum =0;
        bool ok = true;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
            int k=i+1;
            int required = (k*(k+1))/2;
            if(sum<required){
                ok = false;
            }
        }
        if(ok){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}