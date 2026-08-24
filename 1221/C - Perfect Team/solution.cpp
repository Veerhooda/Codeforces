#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#define int long long
using namespace std;
const int N=1e8+10;
int c,m,x;
bool pos(int mid){
    if(c>=mid && m>=mid && c+m+x>=3*mid){
        return true;
    }else{
        return false;
    }
}
signed main()
{
    int q;
    cin>>q;
    while(q--){
        cin>>c>>m>>x;
        int lo=0;
        int hi=N;
        while(hi>=lo){
            int mid=(hi+lo)/2;
            if(pos(mid)){
                lo=mid+1;
            }else{
                hi=mid-1;
            }
        }
        cout<<hi<<endl;
    }
    return 0;
}