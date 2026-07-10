#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#define int long long
using namespace std;
signed main()
{
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
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        vector<int>c(n);
        int max =-2e18;
        for(int i=0;i<n;i++){
            c[i]=a[i]-b[i];
            if(c[i]>max){
                max=c[i];
            }
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(c[i]==max){
                ans.push_back(i+1);
            }
        }
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}