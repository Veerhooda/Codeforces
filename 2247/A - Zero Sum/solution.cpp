#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<numeric>
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
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        if(sum%4==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}