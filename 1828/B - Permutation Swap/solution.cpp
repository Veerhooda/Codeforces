#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>
#include <algorithm>
#define int long long
using namespace std;
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int out=0;
        vector<int>p(n);
        for(int i=0;i<n;i++){
            cin>>p[i];
            int dist=0;
            dist=abs(p[i]-(i+1));
            out=gcd(out,dist);
        }
        cout<<out<<endl;
    }
}