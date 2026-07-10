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
        set<int>a;
        int b=n;
        for(int i=2;i*i<=n;i++){
            if(b%i==0){
                a.insert(i);
                while(b%i==0){
                    b=b/i;
                }
            }
        }
        if(b>1){
            a.insert(b);
        }
        int p=1;
        for(auto i:a){
            p*=i;
        }
        cout<<p<<endl;
    }
    return 0;
}