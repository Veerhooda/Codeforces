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
        int p;
        cin>>p;
        vector<int>a(n);
        vector<int>b(n);
        vector<pair<int,int>>v(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        for(int i=0;i<n;i++){
            v[i]={b[i],a[i]};
        }
        sort(v.begin(),v.end());
        int incost=p;
        int peop=1;
        for(auto i:v){
            int potential=i.second;
            int sharecost=i.first;
            if(sharecost>=p){
                break;
            }
            if(peop+potential>=n){
                incost+=(n-peop)*sharecost;
                peop=n;
                break;
            }
            else{
                incost+=potential*sharecost;
                peop+=potential;
            }
        }
        incost+=(n-peop)*p;
        cout<<incost<<endl;
    }
    return 0;
}