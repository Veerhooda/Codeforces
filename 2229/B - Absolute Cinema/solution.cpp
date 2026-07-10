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
    while (t--){
        int n;
        cin>>n;
        vector<int>a(n);
        vector<int>b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
            if(a[i]>b[i]){
                swap(a[i],b[i]);
            }
        }
        int max_a=0;
        int sum_b=0;
        for(int i=0;i<n;i++){
            if(a[i]>max_a){
                max_a=a[i];
            }
            sum_b+=b[i];
        }
        cout<<max_a+sum_b<<endl;
    }
    return 0;
}