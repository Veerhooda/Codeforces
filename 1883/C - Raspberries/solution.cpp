#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include <climits>
#define int long long
using namespace std;
signed main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        int even=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0){
                even++;
            }
        }
        long long diff = LLONG_MAX;
        int elm=0;
        int ceil=0;
        int p=0;
        int r=0;
        for(int i=0;i<n;i++){
            if(a[i]%k==0){
                ceil=a[i]/k;
            }
            else{
                ceil=(a[i]/k)+1;
            }
            p=k*ceil;
            if(p-a[i]<diff){
                diff=p-a[i];
                elm=a[i];
                r=k*ceil;
            }
        }
        int result=r-elm;
        if(k==4){
            if(even>=2){
                result=min(0LL,result);
            }
            else if(even==1){
                result=min(1LL,result);
            }
            else{
                result=min(2LL,result);
            }
        }
        cout<<result<<endl;
    }
    return 0;
}