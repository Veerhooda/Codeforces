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
        int mx=-1;
        int mn=INT_MAX;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>mx){
                mx=a[i];
            }
            if(a[i]<mn){
                mn=a[i];
            }
        }
        cout<<mx-mn+1<<endl;
    }
    return 0;
}