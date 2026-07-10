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
        bool one=false;
        bool zero=false;
        sort(a.begin(),a.end());
        if(a[0]==0){
            zero=true;
        }
        for(int i=0;i<n;i++){
            if(a[i]==1){
                one =true;
                break;
            }
        }
        if(!one){
            cout<<0<<endl;
        }
        else if(!zero){
            int count=0;
            for(int i=0;i<n;i++){
                if(a[i]==1){
                    count++;
                }
            }
            cout<<count<<endl;
        }
        else{
            int zcount=0;
            int ocount=0;
            for(int i=0;i<n;i++){
                if(a[i]==0){
                    zcount++;
                }
                if(a[i]==1){
                    ocount++;
                }
            }
            cout<<ocount*(1LL<<zcount)<<endl;
        }
    }
    return 0;
}