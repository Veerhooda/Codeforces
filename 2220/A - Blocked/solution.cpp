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
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.rbegin(),a.rend());
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
        }
        int b=0;
        for(int i=0;i<n-1;i++){
            if(a[i]==a[i+1]){
                b=1;
                break;
            }
        }
        if(b==1){
            cout<<-1<<endl;
        }
        else{
            for(int i=0;i<n;i++) cout<<a[i]<<" ";
            cout<<endl;
        }
    }
    return 0;
}