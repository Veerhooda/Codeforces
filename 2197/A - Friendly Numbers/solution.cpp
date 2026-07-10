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
        int count=0;
        for(int i=n;i<n+100;i++){
            int sum=0;
            int p=i;
            while(p>0){
            int b=p%10;
            sum+=b;
            p=p/10;
        }
            if(i-sum==n){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}