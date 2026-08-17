#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>
#define int long long
using namespace std;
signed main() {
    int t;
    cin>>t;
    while(t--){
    int n,m;
    cin>>n>>m;
    bool b[26]={false};
    for(int i=0;i<n;i++){
        string w;
        cin>>w;
        b[w[0]-'a']=true;
    }
    vector<string>a(m);
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    for (int i=0;i<26;i++){
        for (string s:a) {
            bool ok = true;
            for(char c:s){
                if(!b[c-'A']){
                    ok=false;
                    break;
                }
            }
            if(ok)b[s[0]-'A']=true;
        }
    }
    bool possible =true;
    for(string s:a){
        for(char c:s){
            if(b[c-'A']==false){
            possible=false;
            break;
            }
        }
        if(!possible)break;
    }
    if(possible){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    }
}