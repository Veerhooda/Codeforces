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
    int k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    int checker=n*k;
    if(sum%2!=0){
        cout<<"YES"<<endl;
    }
    else if(((sum-1)+checker)%2!=0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
    return 0;
}