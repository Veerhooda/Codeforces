#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(long long i=0;i<t;i++){
        long long n;
        cin>>n;
        vector<long long> arr(n);
        for(long long j=0;j<n;j++){
            cin>>arr[j];
        }
        long long x;
        cin>>x;
        long long mx=*max_element(arr.begin(),arr.end());
        long long mn=*min_element(arr.begin(),arr.end());
        if(x<=mx && x>=mn){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}