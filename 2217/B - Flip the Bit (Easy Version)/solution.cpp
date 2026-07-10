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
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int p;
        cin>>p;
        p--;
        int l=0;
        int r=0;
        for(int i=0;i<p;i++){
            if(a[i]!=a[i+1]){
                l++;
            }
        }
        for(int i=p;i<n-1;i++){
            if(a[i]!=a[i+1]){
                r++;
            }
        }
        l=max(l,r);
        if(l%2!=0){
            l++;
        }
        cout<<l<<endl;
    }
    return 0;
}