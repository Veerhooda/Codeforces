#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#define int long long
using namespace std;
const int N=1e5+10;
vector<int>g[N];
bool vis[N];
bool dfs(int vertex, int par=0, int count=0){
    vis[vertex]=true;
    bool ok=true;
    for(int child:g[vertex]){
        if(vis[child]==true && child!=par)ok= true;
        if(vis[child]==true)continue;
        if(dfs(child,vertex,count)){
            ok= true;
        }
    }
    if(ok)return true;
    return false;
}
signed main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    if(m!=n){
        cout<<"NO"<<endl;
        return 0;
    }
    bool ans=dfs(1);
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            ans=false;
            break;
        }
 
    }
    if(ans){
        cout<<"FHTAGN!";
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}