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
        int rs=min(zeo,one);
        if(rs%2!=0){
            cout<<"DA"<<endl;
        }
        else{
            cout<<"NET"<<endl;
        }
    }
    return 0;
}