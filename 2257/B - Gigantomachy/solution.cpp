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
        int n,m;
        cin>>n>>m;
        vector<int>a(n);
        vector<int>b(m);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
        int c=a[0]+n-1;
        int d=b[0]+m-1;
        if(c>=d){
        cout<<1<<endl;
        }else{
        cout<<2<<endl;
        }
    }
    return 0;
}