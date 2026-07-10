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
        int n,k;
        cin>>n>>k;
        vector<pair<int,int>>a;
        for(int i=0;i<n;i++){
            int b;
            cin>>b;
            a.push_back({b,i+1});
        }
        for(int i=0;i<n;i++){
            a[i].first=a[i].first%k;
            if(a[i].first==0){
                a[i].first=k;
            }
        }
        sort(a.begin(),a.end(),[](pair<int,int>x,pair<int,int>y){
            if(x.first!=y.first){
                return x.first>y.first;
            }
            return x.second<y.second;
        });
        for(int i=0;i<n;i++){
            cout<<a[i].second<<" ";
        }
        cout<<endl;
    }
    return 0;
}