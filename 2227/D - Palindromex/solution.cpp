#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include <set>
#define int long long
using namespace std;
int n;
vector<int> v;
int solve(int l,int r){
    set<int>a;
    for(int i=0;i<=n;i++)a.insert(i);
    while(l>=0 && r<2*n&&v[l]==v[r]){
        a.erase(v[l]);
        l--; r++;
    }
    return *a.begin();
}
signed main()
{
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        v=vector<int>(2*n);
        for(int i=0;i<2*n;i++)cin>>v[i];
        int x=-1,y;
        for(int i=0;i<2*n;i++){
            if(!v[i]){
                if(~x){
                    y=i;
                }else{
                    x=i;
                }
            }
        }
        cout<<max({solve(x,x),solve(y,y),solve((x+y)/2,(x+y+1)/2)})<<endl;
    }
    return 0;
}