#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int>b(n);
        for(int j=0;j<n;j++){
            cin>>b[j];
        }
 
        vector<int>c(n);
        for(int i=0;i<n;i++){
                c[i]=max(a[i],b[i]);
            }
        for(int i=n-2;i>=0;i--){
                c[i]=max(c[i],c[i+1]);
            }
        vector<long long> pref(n + 1, 0);
        for(int i = 0; i < n; i++) {
            pref[i + 1] = pref[i] + c[i];
        }
        while(q--){
            int l,r;
            cin>>l>>r;
            int sum=0;
            cout << pref[r] - pref[l-1] << " ";
        }
        cout<<endl;
    }
}