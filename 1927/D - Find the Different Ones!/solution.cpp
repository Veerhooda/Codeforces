#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include <map>
#define int long long
using namespace std;
//                                      *LOGIC
//Create an array where each index stores the position of the closest element to its left that has a different value.
//If that stored position is greater than or equal to l
//those are your two different elements if it is less than l all elements in that range are identical.
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
        vector<int>b(n,-1);
        for(int i=1;i<n;i++){
            if(a[i]!=a[i-1]){
                b[i]=i-1;
            }
            else{
                b[i]=b[i-1];
            }
        }
        int q;
        cin>>q;
        while(q--){
            int l;
            int r;
            cin>>l>>r;l--;r--;
            if(b[r]>=l){
                cout<<b[r]+1<<" "<<r+1<<"
";
            }
            else{
                cout<<-1<<" "<<-1;
            }
            cout<<"
";
        }
        
    }
    return 0;
}