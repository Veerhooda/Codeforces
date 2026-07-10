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
        int k=0;
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                k=max(k,a[i]-a[i+1]);
            }
        }
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                a[i+1]=a[i+1]+k;
            }
        }
        bool sort=true;
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                sort=false;
            }
        }
        if(sort){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
 
    }
    return 0;
}