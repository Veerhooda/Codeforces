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
    int count=0;
    for (int i=0;i<n-1;i++){
        if(s[i]!=s[i+1]){
            count++;
        }
    }
    if(s[n-1]!=s[0]){
        count++;
    }
    if(count==0){
        cout<<1<<endl;
    }
    else{
        cout<<min(n,count+1)<<endl;
    }
    }
    return 0;
}