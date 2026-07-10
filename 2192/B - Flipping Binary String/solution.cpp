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
        string s;
        cin>>s;
        vector<int>a;
        vector<int>b;
        for(int i=0;i<n;i++){
            a.push_back(s[i]-'0');
            b.push_back(s[i]-'0');
        }
        sort(b.begin(),b.end());
        if(b[n-1]==0){
            cout<<0<<endl;
        }
        else{
        int cnt0=0;
        int cnt1=0;
        for(int i=0;i<n;i++){
            if(a[i]==0){
                cnt0++;
            }
            else{
                cnt1++;
            }
        }
        if(cnt1%2==0){
            cout<<cnt1<<endl;
            for(int i=0;i<n;i++){
                if(a[i]==1){
                    cout<<i+1<<" ";
                }
            }
            cout<<endl;
        }
        else if(cnt0%2!=0){
            cout<<cnt0<<endl;
            for(int i=0;i<n;i++){
                if(a[i]==0){
                    cout<<i+1<<" ";
                }
            }
            cout<<endl;
        }
        else{
            cout<<-1<<endl;
        }
        }
 
    }
    return 0;
}