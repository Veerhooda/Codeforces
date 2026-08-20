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
        int n,x;
        cin>>n>>x;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int sum=0;
        int count=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
            if(sum>x)break;
            int k=i+1;
            int mx=(x-sum)/k;
            count+=mx+1;
        }
        cout<<count<<endl;
    }
    return 0;
}