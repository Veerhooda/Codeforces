#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int k;
        cin>>k;
        string s;
        cin>>s;
        if(n==1 or n-k==1){
            cout<<"YES"<<endl;
        }
        else{
            unordered_map<char,int>mp;
            for(int i=0;i<n;i++){
                mp[s[i]]++;
            }
            int odd=0;
            for(auto it:mp){
                if(it.second%2!=0){
                    odd++;
                }
            }
            if(odd-k<=1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}