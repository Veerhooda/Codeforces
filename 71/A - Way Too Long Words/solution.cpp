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
        if(s.size()<=10){
            cout<<s<<endl;
        }else{
            cout<<s[0]<<s.size()-2<<s[s.size()-1]<<endl;
        }
    }
    return 0;
}