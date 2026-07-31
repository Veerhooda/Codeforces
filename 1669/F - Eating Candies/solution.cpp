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
        vector<int>al(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(i==0){
                al[i]=a[i];
            }else{
                al[i]=al[i-1]+a[i];
            }
        }
        vector<int>bo(n);
        for(int i=n-1;i>=0;i--){
            if(i==n-1){
                bo[n-1-i]=a[n-1];
            }else{
                bo[n-1-i]=bo[n-2-i]+a[i];
            }
        }
        bool found =false;
        int alice=0;
        int bob=0;
        int mx=0;
        for(int i=0;i<n;i++){
            int target=al[i];
            int hi=n-1,lo=0;
            while(lo<=hi){
                int mid=lo+(hi-lo)/2;
                if(bo[mid]==target){
                    if((i+1)+(mid+1)<=n){
                        mx=max(mx,(i+1)+(mid+1));
                    }
                    break;
                }else if(bo[mid]>target){
                    hi=mid-1;
                }else{
                    lo=mid+1;    
                }
            }
        }
        cout<<mx<<endl;
    }
    return 0;
}