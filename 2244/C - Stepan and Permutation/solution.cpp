#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include <numeric>
#define int long long
using namespace std;
int getGCD(int a, int b) {
    while (b!=0) {
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
signed main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        bool ok = true;
        int g=getGCD(x,y);
        for(int i=0;i<n;i++){
            int target=a[i]-1;
            if(i%g!=target%g){
                cout<<"NO"<<endl;
                ok = false;
                break;
            }
        }
        if(ok){
            cout<<"YES"<<endl;
        }
    }
    return 0;
}