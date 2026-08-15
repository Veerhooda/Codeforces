#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#define int long long
using namespace std;
int n,s;
vector<int>a;
pair<bool,int> cost(int p){
    if(p==0)return {true,0};
    vector<int>cost(n);
    for(int i=0;i<n;i++){
        cost[i]=a[i]+((i+1)*p);
    }
    sort(cost.begin(),cost.end());
    int total=0;
    for(int i=0;i<p;i++){
        total+=cost[i];
    }
    if(total>s){
        return {false,total};
    }
    return {true,total};
}
signed main()
{
    cin>>n>>s;
    a.resize(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int lo=0;
    int hi=n;
    int k=0;
    int cst=0;
    while(lo<=hi){
        int mid=(lo+hi)/2;
        pair<bool,int>ans=cost(mid);
        if(ans.first){
            k=mid;
            cst=ans.second;
            lo=mid+1;
        }else{
            hi=mid-1;
        }
    }
    cout<<k<<" "<<cst;
    return 0;
}