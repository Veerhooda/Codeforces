#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include <map>
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
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        map<int,int>b;
        for(int i=0;i<n;i++){
            for(int j=2;j*j<=a[i];j++){
                while(a[i]%j==0){
                    b[j]++;
                    a[i]/=j;
                }
            }
            if(a[i]>1){
                b[a[i]]++;
            }
        }
        bool ok = true;
        for(auto i:b){
            if(i.second%n!=0){
                ok=false;
            }
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