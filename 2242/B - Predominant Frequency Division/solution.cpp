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
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int l=0;
        int m=0;
        bool ok=false;
        int c=INT_MAX;
        for(int i=0;i<n-1;i++){
            if(a[i]==1){
                l++;
                m++;
            }
            else if(a[i]==2){
                l--;
                m++;
            }
            else if(a[i]==3){
                l--;
                m--;
            }
            if(m>=c){
                ok=true;
                break;
            }
            if(l>=0){
                c=min(c,m);
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