#include <iostream>
#include <algorithm>
#include <vector>
#define int long long
using namespace std;
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        vector<int>b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int sum=0;
        int max=0;
        for(int i=0;i<n;i++){
            sum+=b[i];
            if(sum>n){
                break;
            }
            int x=a[n-sum];
            int cr=x*(i+1);
            if(cr>max){
                max=cr;
            }
        }
        cout<<max<<endl;
    }
}