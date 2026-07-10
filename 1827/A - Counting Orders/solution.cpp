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
        int n ;
        cin>>n;
        const int MOD = 1e9+7;
        vector<int>a(n);
        vector<int>b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int c=0;
        int result=1;
        sort(a.begin(),a.end());
        sort(b.rbegin(),b.rend());
        for(int i=0;i<n;i++){
            int count=0;
            int j=upper_bound(a.begin(),a.end(),b[i])-a.begin();
            count=n-j;
            if(count - i <= 0){
                result = 0;
                break;
            }
            else{
                result=(result*(count-c))%MOD;
            c++;
            }
        }
        cout<<result<<endl;
    }
    return 0;
}