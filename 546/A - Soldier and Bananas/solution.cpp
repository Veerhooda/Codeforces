#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#define int long long
using namespace std;
signed main()
{
    int k,n,w;
    cin>>k>>n>>w;
    int req=0;
    for(int i=0;i<w;i++){
        req+=(i+1)*k;
    }
    if(req<n){
        cout<<0<<endl;
    }
    else{
        cout<<req-n<<endl;
    }
    return 0;
}