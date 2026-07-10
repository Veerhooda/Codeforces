#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<unordered_set>
#define int long long
const int L=1000000;
using namespace std;
signed main()
{
    unordered_set<int>a;
    for(int i=2;i*i<=L;i++){
        int p=i*i;
        int sum=1+i+p;
        while(sum<=L){
            a.insert(sum);
            if(p>L/i)break;
            p*=i;
            sum+=p;
        }
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(a.count(n)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}