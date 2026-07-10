#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#define int long long
using namespace std;
signed main()
{
    int n;
    string s;
    cin>>n>>s;
    bool less = false;
    int l=1;
    int r=0;
    // for(int i=0;i<n-1;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(s[j]<s[i]){
    //             less=true;
    //             l=i+1;
    //             r=j+1;
    //             break;
    //         }
    //     }
    //     if(less){
    //         break; 
    //     }
    // }
    char high = s[0];
    for(int i=0;i<n;i++){
        if(s[i]>high){
            high=s[i];
            l = i+1;
        }
        if(s[i]<high){
            less=true;
            r=i+1;
            break;
        }
    }
    if(less){
        cout<<"YES"<<endl;
        cout<<l<<" "<<r<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}