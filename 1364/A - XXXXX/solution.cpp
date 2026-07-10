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
        int x;
        cin>>n>>x;
        vector<int>a(n);
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        if(sum%x!=0){
            cout<<n<<endl;
            continue;
        }
        int left=-1;
        int right=-1;
        for(int i=0;i<n;i++){
            if(a[i]%x!=0){
                right=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(a[i]%x!=0){
                left=i;
                break;
            }
        }
        if(left==-1){
            cout<<-1<<endl;
        }
        else{
            cout<<max(n-1-right,left)<<endl;
 
        }
    }
    return 0;
}