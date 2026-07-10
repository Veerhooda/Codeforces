#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int output=0;
        for(int i=0;i<n-1;i++){
            if(s[i]!=s[n-1]){
                output++;
                
                s[i]=s[i+1];
                
            }
        }
        
        
        cout<<output<<endl;
    }
}