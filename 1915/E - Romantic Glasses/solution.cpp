#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include <set>
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
        int lulia=0;
        int date=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(i%2!=0){
                a[i]=-a[i];
            }
        }
        bool ok=false;
        set<int>b;
        b.insert(0);
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
            if(b.count(sum)){
                ok = true;
                break;
            }
            b.insert(sum);
        }
        if(ok){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}