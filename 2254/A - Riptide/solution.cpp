#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<set>
#define int long long
using namespace std;
signed main()
{
    int t;
    cin>>t;
    while(t--){
        vector<int>a(3);
        for(int i=0;i<3;i++){
            cin>>a[i];
        }
        if(a[0]==a[1] || a[1]==a[2] || a[0]==a[2]){
            cout<<0<<endl;
            continue;
        }
        int count =0;
        sort(a.begin(),a.end());
        count=min(a[2]-a[1],a[1]-a[0]);
        cout<<count<<endl;
    }
    return 0;
}