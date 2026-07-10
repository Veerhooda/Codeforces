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
        int a;
        int b;
        cin>>a;
        cin>>b;
        if(a>b){
            swap(a,b);
        }
        if(a==b){
            cout<<0<<" "<<0<<endl;
        }
        else{
        int gc=b-a;
        int mv=min(b%gc,gc-b%gc);
        cout<<gc<<" "<<mv;
        cout<<endl;
        }
    }
    return 0;
}