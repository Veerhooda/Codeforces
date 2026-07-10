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
        int k;
        cin>>n;
        cin>>k;
        int p=n*k;
        vector<int>a(p);
        for(int i=0;i<p;i++){
            cin>>a[i];
        }
        int ptr=p;
        int sum=0;
        while(k--){
            ptr-=n/2+1;
            sum+=a[ptr];
        } 
        cout<<sum<<endl;
    }
    return 0;
}