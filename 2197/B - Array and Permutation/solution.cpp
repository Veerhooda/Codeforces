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
        vector<int>p(n);
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        vector<int>b;
        b.push_back(a[0]);
        for(int i=1;i<n;i++){
            if(a[i]!=a[i-1]){
                b.push_back(a[i]);
            }
        }
        int ptr=0;
        for(int i=0;i<n;i++){
            if(ptr==b.size()){
                break;
            }
            if(p[i]==b[ptr]){
                ptr++;
            }
        }
        if(ptr==b.size()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}