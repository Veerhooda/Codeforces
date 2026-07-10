#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include <numeric>
#define int long long
using namespace std;
signed main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    int g=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i==0){
            g=a[i];
        }
        else{
            g=gcd(g,a[i]);
        }
        
    }
    bool ok = true;
    for(int i=0;i<n;i++){
        a[i]=a[i]/g;
        while(a[i]%2==0){
            a[i]=a[i]/2;
        }
        while(a[i]%3==0){
            a[i]=a[i]/3;
        }
        if(a[i]!=1){
            ok = false;
            break;
        }
    }
    if(ok){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}