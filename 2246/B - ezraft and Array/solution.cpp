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
        vector<int>ans;
        if(n==1){
            cout<<1<<endl;
        }
        else if(n==2){
            cout<<-1<<endl;
        }
        else{
            cout<<"1 2 3";
            int x=6;
            for(int i=4;i<=n;i++){
                cout<<" "<<x;
                x*=2;
            }
            cout<<endl;
        }
    }
    return 0;
}