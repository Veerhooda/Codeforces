#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#define int long long
using namespace std;
int n,m;
vector<int>a;
int cnt(int b){
    int lo=0;
    int hi=n;
    while(hi>lo){
        int mid=(hi+lo)/2;
        if(a[mid]>b){
            hi=mid;
        }else{
            lo=mid+1;
        }
    }
    return lo;
    
}
signed main()
{
    cin>>n>>m;
    a.resize(n);
    vector<int>b(m);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    for(int i=0;i<m;i++){
        int p=cnt(b[i]);
        cout<<p<<" ";
    }
    return 0;
}