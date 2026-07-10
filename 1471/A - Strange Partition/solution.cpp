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
        int x;
        cin>>n;
        cin>>x;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int mx=0;
        for(int i=0;i<n;i++){
            if(a[i]%x==0){
                mx+=a[i]/x;
            }
            else{
                mx+=(a[i]/x)+1;
            }
        }
        int mn=0;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
        }
        if(sum%x==0){
            mn=sum/x;
        }
        else{
            mn=(sum/x)+1;
        }
        cout<<mn<<" "<<mx<<endl;
    }
    return 0;
}