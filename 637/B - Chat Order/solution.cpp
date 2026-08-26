#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#define int long long
using namespace std;
bool out(pair<string,int>&x,pair<string,int>&y){
    return x.second>y.second;
}
signed main()
{
    int n;
    cin>>n;
    map<string,int>a;
    int p=1;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        a[s]=p;
        p++;
    }
    vector<pair<string,int>>b;
    for(auto i:a){
        b.push_back({i.first,i.second});
    }
    sort(b.begin(),b.end(),out);
    for(auto i:b){
        cout<<i.first<<endl;
    }
    return 0;
}