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
        for(int i=0;i<n;i++){
            if(a[i]==n){
                swap(a[0],a[i]);
                break;
            }
        }
        for(auto i:a){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}