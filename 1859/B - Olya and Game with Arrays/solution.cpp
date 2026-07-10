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
        vector<int>b;
        int mini=INT64_MAX;
        while(n--){
            int m;
            cin>>m;
            vector<int>a(m);
            for(int i=0;i<m;i++){
                cin>>a[i];
            }
            sort(a.begin(),a.end());
            b.push_back(a[1]);
            if(a[0]<mini){
                mini=a[0];
            }
        }
        sort(b.begin(),b.end());
        b[0]=mini;
        int sum=0;
        for(auto i:b){
            sum+=i;
        }
        cout<<sum<<endl;
    }
    return 0;
}