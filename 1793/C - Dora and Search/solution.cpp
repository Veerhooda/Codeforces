#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<set>
#define int long long
using namespace std;
bool ok(int val,set<int>&a){
    if((*a.begin())==val || (*a.rbegin())==val)return true;
 
    return false;
}
signed main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        set<int>b(a.begin(),a.end());
        int i=0;
        int j=n-1;
        while(i<j){
            if(ok(a[i],b)){
                b.erase(a[i]);
                i++;
                continue;
            }
            if(ok(a[j],b)){
                b.erase(a[j]);
                j--;
                continue;
            }
 
            break;
        }
 
        if(i<j){
            cout<<i+1<<" "<<j+1<<endl;
        }
        else{
            cout<<-1<<endl;
        }
 
    }
    return 0;
}