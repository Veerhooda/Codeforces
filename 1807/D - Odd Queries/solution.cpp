#include <iostream>
#include <vector>
#include <algorithm>
#define int long long
using namespace std;
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int q;
        cin>>q;
        vector<int>a(n);
        vector<int> b(n + 1);
        int su=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            su+=a[i];
            b[i + 1] = b[i] + a[i];
        }
        while(q--){
            int l;
            int r;
            int k;
            cin>>l;
            cin>>r;
            cin>>k;
            int sum=0;
            int s = b[r] - b[l - 1];
            sum=su+((r-l+1)*k)-s;
            if(sum%2!=0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
 
        }
    }
}