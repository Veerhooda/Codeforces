#include<iostream>
#include<vector>
#include<map>
#define int long long
using namespace std;
signed main()
{
    int n;
    cin >> n;
    map<int,vector<int>> d;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        d[x].push_back(i);
    }
    vector<pair<int,int>> ans;
    for(auto it:d){
        int value = it.first;
        vector<int>c = it.second;
        if(c.size() == 1){
            ans.push_back({value, 0});
            continue;
        }
        bool isAP = true;
        int diff = c[1]-c[0];
        for(int i=1;i<c.size()-1;i++){
            if(c[i+1]-c[i]!=diff){
                isAP=false;
                break;
            }
        }
        if(isAP){
            ans.push_back({value,diff});
        }
    }
    cout<<ans.size()<<endl;
    for(auto x:ans){
        cout<<x.first<<" "<<x.second<<endl;
    }
    return 0;
}