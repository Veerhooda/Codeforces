#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include <map>
#define int long long
using namespace std;
signed main()
{
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        vector<int>a(k);
        for(int i=0;i<k;i++){
            cin>>a[i];
        }
        bool three = false;
        bool two = false;
        int count=0;
        for(int i=0;i<k;i++){
            if(a[i]>=3){
                three= true;
            }
            if(a[i]==2){
                count++;
            }
        }
        if(count>=2){
            two=true;
        }
        if(two or three){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}