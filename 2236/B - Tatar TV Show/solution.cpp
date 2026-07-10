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
        cin>>n>>k;
        string s;
        cin>>s;
        bool ok =true;
        for(int i=0;i<k;i++){
            int count=0;
            for(int j=i;j<n;j+=k){
                if(s[j]=='1'){
                    count++;
                }
            }
            if(count%2!=0){
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