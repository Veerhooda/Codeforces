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
        sort(a.begin(),a.end());
        int count=0;
        for(int i=0;i<n;i++){
            if(a[i]!=a[n-1-i]){
                count++;
            }
        }
        cout<<count/2<<endl;
    }
    return 0;
}