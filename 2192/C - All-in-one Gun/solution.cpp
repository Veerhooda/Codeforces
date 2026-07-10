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
        int h;
        cin>>h;
        int k;
        cin>>k;
        vector<int>a(n);
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        int c=(h-1)/sum;
        int r=h-(c*sum);
 
        vector<int> pref(n);
        pref[0] = a[0];
        for(int i=1;i<n;i++)
        pref[i] = pref[i-1] + a[i];
        vector<int> mn(n);
        mn[0] = a[0];
        for(int i=1;i<n;i++)
        mn[i] = min(mn[i-1], a[i]);
        vector<int> mx(n);
        mx[n-1] = a[n-1];
        for(int i=n-2;i>=0;i--)
        mx[i] = max(mx[i+1], a[i]);
        int t = n;
 
        for(int i=0;i<n;i++){
 
            int sum = pref[i];
 
            if(sum >= r){
                t = i+1;
                break;
            }
 
            if(i+1 < n){
                int sum1 = sum - mn[i] + mx[i+1];
                if(sum1 >= r){
                    t = i+1;
                    break;
                }
            }
        
        }
        cout<<(c*(n+k))+t<<endl;
 
    }
    return 0;
}