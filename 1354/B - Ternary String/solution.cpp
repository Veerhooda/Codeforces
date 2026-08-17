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
        int l1=-1,l2=-1,l3=-1;
        int mini=1e9;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1')l1=i;
            if(s[i]=='2')l2=i;
            if(s[i]=='3')l3=i;
            if(l1!=-1&&l2!=-1&&l3!=-1){
                int st=min({l1,l2,l3});
                mini=min(mini,i-st+1);
            }
        }
        if(mini==1e9){
            cout<<0<<endl;
        }else{
            cout<<mini<<endl;
        }
    }
    return 0;
}