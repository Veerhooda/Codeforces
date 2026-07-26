#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#define int long long
using namespace std;
/*isme transition count hoga n-k-1?? or k n-1 se kam hona chyiye warna 0-1<=1 wali condition break hori??
 to hme k pairs ke liye n-k blocks lagenge iska matlab ......*/
signed main()
{
    int t;
    cin>>t;
    while(t--){
    int n,k;
    cin>>n>>k;
    int m =n-k;
    if(m==1){
        cout<<-1<<endl;
        continue;
    }
    int a=(m+1)/2;
    int b=m/2;
    int A=(n+1)/2;
    int B=n/2;
    string s;
    s.reserve(n);
    for(int i=0;i<b;i++){
        if(i==0){
            s.append(A-a+1,'0');
            s.append(B-b+1,'1');
        }else{
            s.append(1,'0');
            s.append(1,'1');
        }
    }
    if(a>b){
        s.append(1,'0');
    }
    cout<<s<<endl;
    }
    return 0;
}