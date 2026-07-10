#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int alice;
        cin>>alice;
        vector<int> v;
        for(int i=0;i<n;i++){
            int u=0;
            cin>>u;
            v.push_back(u);
        }
        int m=0;
        int p=0;
        for(int i=0;i<n;i++){
            if(v[i]<alice){
                p++;
            }
            if(v[i]>alice){
                m++;
            }
        }
        int bob=0;
        if(m>p){
            bob=alice+1;
        }
        else{
            bob=alice-1;
        }
        cout<<bob<<endl;
    }
}