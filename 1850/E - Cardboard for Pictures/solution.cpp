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
        int c;
        cin>>c;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        __int128 sumsq=0;
        __int128 sum=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
            sumsq=sumsq+(a[i]*a[i]);
        }
        __int128 p=n;
        __int128 q=2*sum;
        __int128 r=sumsq-c;
        __int128 dis=sqrt((long double)(q*q)-4*p*r);
        int result=(-q+dis)/(2*p);
        cout<<result/2<<endl;
    }
    return 0;
}