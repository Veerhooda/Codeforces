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
        int n,m,d;
        cin>>n>>m>>d;
        int count=(d/m)+1;
        int towers=0;
        if(n%count==0){
            towers=n/count;
        }
        else{
            towers=(n/count)+1;
        }
        
        cout<<towers<<endl;
    }
    return 0;
}