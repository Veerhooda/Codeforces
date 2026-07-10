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
        string s;
        cin>>s;
        int zeo=0;
        int one=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                zeo++;
            }
            else{
                one++;
            }
        }
        int n=s.size();
        int t=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'&& one>0){
                one--;
                t++;
            }
            else if(s[i]=='1' && zeo>0){
                zeo--;
                t++;
            }
            else{
                break;
            }
        }
        cout<<n-t<<endl;
    }
    return 0;
}