#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>
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
        unordered_map<int,int>freq;
        int mx=0;
        for(int i=0;i<n*n;i++){
            int x;
            cin>>x;
            mx=max(mx,++freq[x]);
        }
        if(n>1 && mx<=n*(n-1)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        }
    return 0;
}