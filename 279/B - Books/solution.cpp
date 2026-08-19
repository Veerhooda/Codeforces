#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#define int long long
using namespace std;
signed main()
{
    int n,t;
    cin>>n>>t;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=0;
    int pvt=0;
    int book=0;
    int mx=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        book++;
        while(sum>t){
            sum-=a[pvt];
            pvt++;
            book--;
        }
        mx=max(mx,book);
    }
    cout<<mx<<endl;
    return 0;
}