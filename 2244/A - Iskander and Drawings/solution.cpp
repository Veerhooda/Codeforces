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
        int max_length=0;
        int count =0;
        for(int i=0;i<n;i++){
            if(s[i]=='#'){
                count++;
                max_length=max(max_length,count);
            }
            else{
                count =0;
            }
        }
        if(max_length ==0){
            cout<<0<<endl;
        }
        else{
            cout<<(max_length+1)/2<<endl;
        }
 
    }
    return 0;
}