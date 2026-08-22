#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#define int long long
using namespace std;
const int N=1e5+10;
vector<bool>vis(N);
vector<int>g[N];
int n,m;
int dfs(int x,int y){
    if(x<0 || y<0 || x>=n || y>=m || g[x][y]==0) return 0;
    int ans=g[x][y];
    g[x][y]=0;
    ans+=dfs(x+1,y);
    ans+=dfs(x-1,y);
    ans+=dfs(x,y+1);
    ans+=dfs(x,y-1);
    return ans;
}
signed main()
{
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=0;i<n;i++){
            g[i].clear();
            for(int j=0;j<m;j++){
                int x;
                cin>>x;
                g[i].push_back(x);
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(g[i][j]>0){
                    ans =max(ans,dfs(i,j));
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}