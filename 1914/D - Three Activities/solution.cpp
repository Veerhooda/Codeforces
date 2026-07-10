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
        vector<int>a(n);
        vector<int>b(n);
        vector<int>c(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        for(int i=0;i<n;i++){
            cin>>c[i];
        }
        vector<pair<int,int>>A,B,C;
        for(int i=0;i<n;i++){
            A.push_back({a[i],i});
            B.push_back({b[i],i});
            C.push_back({c[i],i});
        }
        sort(A.rbegin(),A.rend());
        sort(B.rbegin(),B.rend());
        sort(C.rbegin(),C.rend());
        int ans=0;
        for(int i=0;i<3&&i<n;i++){
            for(int j=0;j<3&&j<n;j++){
                for(int k=0;k<3&&k<n;k++){
                    int id1=A[i].second;
                    int id2=B[j].second;
                    int id3=C[k].second;
                    if(id1!=id2 && id2!=id3&&id3!=id1){
                        ans=max(ans,A[i].first+B[j].first+C[k].first);
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
}