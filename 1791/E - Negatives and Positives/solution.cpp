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
        vector<int>a(n);
        int p=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<0){
                p++;
            }
        }
        int sum=0;
        if(p%2==0){
            for(int i=0;i<n;i++){
                sum=sum+abs(a[i]);
            }
        }
        else{
            int mn=INT32_MAX;
            for(int i=0;i<n;i++){
                sum=sum+abs(a[i]);
                a[i]=abs(a[i]);
                if(a[i]<mn){
                    mn=a[i];
                }
            }
            sum-=2*mn;
        }
        cout<<sum<<endl;
    }
    return 0;
}